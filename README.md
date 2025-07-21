# soniq3D 🔊📈

**soniq3D** is a C++ engine with Python bindings that converts audio signals into structured 3D data for visualization, analysis, or artistic purposes.

## 🎯 Features

- 🎧 Load and process WAV audio files
- ⚡ Fast Fourier Transform (FFTW3)
- 📊 Convert audio into 3D data points
- 🐍 Python bindings with pybind11
- 🔜 Real-time audio capture (planned)

## 🛠 Requirements

- C++17
- [FFTW3](http://www.fftw.org/)
- [PortAudio](http://www.portaudio.com/) (optional, for live input)
- [pybind11](https://github.com/pybind/pybind11)
- Python 3.8+

## 📦 Installation

This project is under development. To build it locally:

```bash
git clone https://github.com/YOUR_USERNAME/soniq3D.git
cd soniq3D
mkdir build && cd build
cmake ..
make
