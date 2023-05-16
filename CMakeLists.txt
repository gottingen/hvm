cmake_minimum_required(VERSION 3.2)
project(hvm)

if (HERCULES_ROOT)
    include_directories(${HERCULES_ROOT}/include)
    link_directories(${HERCULES_ROOT})
else ()
    execute_process(
            COMMAND bash -c "python3 -c 'from hercules.contrib.cpp_extension import include_paths; print(include_paths()[0]) '| tr -d '\n'"
            OUTPUT_VARIABLE HS_INCLUDE_DIR
    )


execute_process(
        COMMAND bash -c "python3 -c 'from hercules.contrib.cpp_extension import library_paths; print(library_paths()[0]) '| tr -d '\n'"
        OUTPUT_VARIABLE HS_LIB_DIR
)
    message(STATUS ${HS_INCLUDE_DIR})
    message(STATUS ${HS_LIB_DIR})
    include_directories(${HS_INCLUDE_DIR})
    link_directories(${HS_LIB_DIR})
endif ()

if(DEFINED ENV{CPPFLAGS})
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} $ENV{CPPFLAGS}")
endif ()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")


set(HVM_SRC
        src/foo.cc)

set(CMAKE_VERBOSE_MAKEFILE ON)
add_library(hvm SHARED ${HVM_SRC})
target_link_libraries(hvm hercules)

INSTALL(DIRECTORY python/hvm DESTINATION .)
INSTALL(FILES python/requirements.txt DESTINATION .)
INSTALL(FILES python/setup.py DESTINATION .)

INSTALL(TARGETS hvm
        RUNTIME DESTINATION hvm/bin
        LIBRARY DESTINATION hvm/lib
        ARCHIVE DESTINATION hvm/lib)
