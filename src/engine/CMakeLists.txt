cmake_minimum_required(VERSION 3.20)
project(engine)

add_library(${PROJECT_NAME}
)

target_sources(${PROJECT_NAME} PUBLIC FILE_SET CXX_MODULES FILES
    engine.ixx
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)