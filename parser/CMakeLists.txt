cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(parser)

set(CMAKE_CXX_STANDARD 17)

set(TARGET parser)

set(ANTLR_DIR "D:/antlrGen/antlr-4.13.2")

set(ANTLR_INCLUDE_DIR "D:/antlrGen/antlr-4.13.2/include/antlr4-runtime")
set(ANTLR_LIB "D:/antlrGen/antlr-4.13.2/lib/antlr4-runtime.lib")

file(GLOB PARSER_SOURCE "*.c*")
file(GLOB PARSER_HEADERS "*.h*")

add_library(${PROJECT_NAME} STATIC ${PARSER_SOURCE} ${PARSER_HEADERS})

target_include_directories(${PROJECT_NAME} 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}
    PRIVATE 
        ${ANTLR_INCLUDE_DIR}
)


target_link_libraries(${PROJECT_NAME} ${ANTLR_LIB})