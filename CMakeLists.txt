cmake_minimum_required(VERSION 3.23)
project(lab6_isr)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab6_isr main.cpp)
add_subdirectory(lib)
target_link_libraries(${PROJECT_NAME} PRIVATE calculator)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
enable_testing()
add_subdirectory(tests)