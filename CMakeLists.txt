cmake_minimum_required(VERSION 3.14)
project(soniq3D)

set(CMAKE_CXX_STANDARD 17)

find_package(pybind11 REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(FFTW3 REQUIRED IMPORTED_TARGET fftw3)
find_package(PkgConfig REQUIRED)
pkg_check_modules(PORTAUDIO REQUIRED portaudio-2.0)

include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${FFTW3_INCLUDE_DIRS})
include_directories(${PORTAUDIO_INCLUDE_DIRS})

pybind11_add_module(soniq3d bindings/soniq3d_bindings.cpp src/Engine.cpp)

target_link_libraries(soniq3d PRIVATE ${FFTW3_LIBRARIES} ${PORTAUDIO_LIBRARIES})
target_link_libraries(soniq3d PRIVATE PkgConfig::FFTW3)
