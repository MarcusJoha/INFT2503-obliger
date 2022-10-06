cmake_minimum_required(VERSION 3.22)
project(oblig6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})



add_executable(chess main.cpp ChessBoard.cpp pieces/Piece.cpp pieces/King.cpp pieces/Knight.cpp)

