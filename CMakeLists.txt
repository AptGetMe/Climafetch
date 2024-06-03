cmake_minimum_required(VERSION 3.0.0)
project(QTHelloWorld VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

find_package(Qt6 COMPONENTS Core Widgets)

add_executable(QTHelloWorld main.cpp)
target_link_libraries(QTHelloWorld Qt6::Core Qt::Widgets)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
