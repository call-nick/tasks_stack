cmake_minimum_required(VERSION 3.28)

option(DEBUG "Debug mode" ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(DEBUG)
  # add_definitions(-DDEBUG)
  # add_definitions(-DCSV_DEBUG)
endif()


project(todo)

add_executable(todo
              src/main.cpp
              include/model.cpp
              include/view.cpp
              include/viewmodel.cpp
              include/color.cpp
              include/command.cpp
              include/print_stack.cpp
              #              third-party/nlohmann/single_include/nlohmann/json.hpp
              )

target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
