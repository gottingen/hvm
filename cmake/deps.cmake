set(CPM_DOWNLOAD_VERSION 0.32.3)
set(CPM_DOWNLOAD_LOCATION "${CMAKE_BINARY_DIR}/cmake/CPM_${CPM_DOWNLOAD_VERSION}.cmake")
if(NOT (EXISTS ${CPM_DOWNLOAD_LOCATION}))
    message(STATUS "Downloading CPM.cmake...")
    file(DOWNLOAD https://github.com/TheLartians/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake ${CPM_DOWNLOAD_LOCATION})
endif()
include(${CPM_DOWNLOAD_LOCATION})

CPMAddPackage(
    NAME turbo
    GITHUB_REPOSITORY "gottingen/turbo"
    GIT_TAG v0.8.9
    OPTIONS "TURBO_BUILD_TESTING OFF"
        "TURBO_BUILD_EXAMPLE OFF"
        "TURBO_USE_CXX_ABI OFF"
        "TURBO_BUILD_EXAMPLE OFF")

CPMAddPackage(
        NAME libtext
        GITHUB_REPOSITORY "gottingen/libtext"
        GIT_TAG v0.1.4
        OPTIONS "TURBO_BUILD_TESTING OFF"
        "TURBO_BUILD_EXAMPLE OFF")
