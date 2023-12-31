cmake_minimum_required(VERSION 3.10)
project(STR)

set(ABVGD
  "main.cpp"
  "GameState.h"
  "GameState.cpp"
  "IFigure.h"
  "IFigure.cpp"
  "Chick.h"
  "Chick.cpp"
  "Lion.h"
  "Lion.cpp"
)

add_executable(program ${ABVGD})