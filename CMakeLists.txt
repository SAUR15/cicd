cmake_minimum_required(VERSION 3.10)
project(MathUtils)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "--coverage")

enable_testing()
find_package(GTest REQUIRED)

add_executable(test_math_utils math_utils.cpp test_math_utils.cpp)
target_link_libraries(test_math_utils GTest::GTest GTest::Main gcov)
add_test(NAME MathTests COMMAND test_math_utils)
