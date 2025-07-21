#include "Engine.h"
#include <iostream>

Engine::Engine() {}

void Engine::processFile(const std::string& path) {
    std::cout << "Przetwarzam plik: " << path << std::endl;
    meshData.emplace_back(0.0f, 0.0f, 1.0f);  // fake point
}

std::vector<std::tuple<float, float, float>> Engine::getMesh() const {
    return meshData;
}
