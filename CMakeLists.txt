cmake_minimum_required(VERSION 3.10)
project(FetchBE)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_subdirectory(dependencies/cpp_redis)

include_directories(/usr/local/homebrew/Cellar/boost/1.78.0_1/include)
include_directories (${CMAKE_CURRENT_SOURCE_DIR}/dependencies/Crow/include)
include_directories (${CMAKE_CURRENT_SOURCE_DIR}/dependencies/cpp_redis/includes)

link_directories(/usr/local/homebrew/lib)

add_executable(FetchBE main.cpp)

target_link_libraries(FetchBE cpp_redis)
target_link_libraries(FetchBE pthread)
target_link_libraries(FetchBE boost_system)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)
