#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "../src/Engine.h"

namespace py = pybind11;

PYBIND11_MODULE(soniq3d, m)
{
    py::class_<Engine>(m, "Engine")
        .def(py::init<>())
        .def("process_file", &Engine::processFile)
        .def("get_mesh", &Engine::getMesh);
}
