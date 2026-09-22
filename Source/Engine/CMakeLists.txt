cmake_minimum_required(VERSION 3.20)
project(Engine)

add_library(${PROJECT_NAME}
    Private/Engine.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_SOURCE_DIR}/Public
)