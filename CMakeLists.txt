
cmake_minimum_required(VERSION 3.18)
set(CMAKE_RC_COMPILER "windres")
set(CMAKE_BUILD_TYPE Debug)
project(wxcmaketest)


set(SOURCES 
    src/cApp.h
    src/cMain.h
    src/cApp.cpp
    res/app.rc
    src/cMain.cpp
)
add_subdirectory(libs/wxWidgets)

IF(CMAKE_BUILD_TYPE MATCHES Debug)
    message("debug mode")
    add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})
ELSE()
    add_executable(${CMAKE_PROJECT_NAME} WIN32 ${SOURCES})
ENDIF()

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE wx::net wx::core wx::base)