cmake_minimum_required(VERSION 3.6)
project(Bat_jump_project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
set(SFML_ROOT "${CMAKE_SOURCE_DIR}/SFML-2.4.2")
set(SOURCE_FILES main.cpp main.cpp GameObject.cpp GameObject.h Level.cpp Level.h Player.cpp Player.h PowerUp.cpp PowerUp.h Enemy.cpp Enemy.h Bullet.cpp Bullet.h Platform.cpp Platform.h)

add_executable(Bat_jump_project ${SOURCE_FILES})


find_package(SFML COMPONENTS graphics window system network audio REQUIRED)

if(SFML_FOUND)
    target_include_directories(Bat_jump_project PUBLIC ${SFML_INCLUDE_DIR})
    target_link_libraries(Bat_jump_project ${SFML_LIBRARIES})
endif()