cmake_minimum_required(VERSION 3.18)
set(CMAKE_RC_COMPILER "windres")
project(wxcmaketest)

IF(CMAKE_BUILD_TYPE MATCHES DEBUG)
    message("debug mode")
ENDIF(CMAKE_BUILD_TYPE MATCHES DEBUG)


set(SOURCES 
    src/cApp.h
    src/cMain.h
    src/cApp.cpp
    res/app.rc
    src/cMain.cpp
)
add_subdirectory(libs/wxWidgets)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE wx::net wx::core wx::base)
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS")