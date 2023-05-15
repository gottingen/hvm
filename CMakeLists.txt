cmake_minimum_required(VERSION 3.2)
project(hvm)

SET(CMAKE_LOCAL "${PROJECT_SOURCE_DIR}/cmake")
LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_LOCAL}/)
SET(CMAKE_INSTALL_RPATH ".")

IF (DEFINED ENV{CUDA_HOME})
    MESSAGE(STATUS "USE CUDA CUDA_HOME: $ENV{CUDA_HOME}")
    SET(USE_CUDA $ENV{CUDA_HOME})
ENDIF ()

IF (USE_CUDA)
    INCLUDE(cmake/FindCUDA.cmake)
    find_cuda(${USE_CUDA})
    INCLUDE_DIRECTORIES(SYSTEM ${CUDA_INCLUDE_DIRS})
    SET(CMAKE_CUDA_FLAGS "-O2 -Xcompiler=-Wall -Xcompiler=-fPIC ${CMAKE_CUDA_FLAGS}")
    MESSAGE(STATUS "CMAKE_CUDA_FLAGS: ${CMAKE_CUDA_FLAGS}")
ENDIF ()

execute_process(
        COMMAND bash -c "python3 -c 'from hercules.contrib.cpp_extension import include_paths; print(include_paths()[0]) '"
        OUTPUT_VARIABLE HS_INCLUDE_DIR
)

execute_process(
        COMMAND bash -c "python3 -c 'from hercules.contrib.cpp_extension import library_paths; print(library_paths()[0]) '"
        OUTPUT_VARIABLE HS_LIB_DIR
)

message(STATUS ${HS_INCLUDE_DIR})
message(STATUS ${HS_LIB_DIR})

include_directories(${HS_INCLUDE_DIR})
link_directories(${HS_LIB_DIR})