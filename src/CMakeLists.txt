cmake_minimum_required(VERSION 3.16.3)

project(Utilites 
	VERSION 1.0.0
	DESCRIPTION "Dumb library")

add_library(math-arithmetic)
target_sources(math-arithmetic PRIVATE arithmetics.cpp PUBLIC arithmetics.hpp)

target_compile_features(math-arithmetic PUBLIC cxx_std_17)
add_library(Math::Arithmetic ALIAS math-arithmetic)

add_library(strutils INTERFACE)
target_include_directories(strutils INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
target_compile_features(strutils INTERFACE cxx_std_17)

add_library(String::Utilities ALIAS strutils)
