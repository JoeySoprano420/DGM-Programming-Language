cmake_minimum_required(VERSION 3.14)
project(dgm LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(LLVM REQUIRED CONFIG)
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

include_directories(include)

add_executable(dgmc
    src/lexer.cpp
    src/parser.cpp
    src/ast.cpp
    src/codegen.cpp
    src/runtime.c
    src/driver.cpp
)

llvm_map_components_to_libnames(llvm_libs
    core
    support
    irreader
    native
)

target_link_libraries(dgmc ${llvm_libs})
