cmake_minimum_required(VERSION 3.10)
project(cpp_mujoco LANGUAGES C)

add_executable(prac prac.c)

target_include_directories(prac PUBLIC ${CMAKE_SOURCE_DIR}/mujoco/include)
target_link_libraries(prac PRIVATE ${CMAKE_SOURCE_DIR}/mujoco/bin/mujoco_plugin)
