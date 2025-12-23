cmake_minimum_required(VERSION 3.10)
project(cpp_mujoco LANGUAGES C)

set(MUJOCO_DIR ${CMAKE_SOURCE_DIR}/mujoco)

add_executable(prac prac.c)

target_include_directories(prac PUBLIC ${MUJOCO_DIR}/include)

target_link_directories(prac PRIVATE ${MUJOCO_DIR}/lib)

target_link_libraries(prac PRIVATE mujoco)

set_target_properties(prac PROPERTIES
    BUILD_RPATH ${MUJOCO_DIR}/lib
    INSTALL_RPATH ${MUJOCO_DIR}/lib
)
