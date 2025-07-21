#include "Engine.h"
#include <iostream>
#include <cmath>

Engine::Engine() {}

void Engine::processFile(const std::string& path) {
    std::cout << "Przetwarzam plik: " << path << std::endl;
    // Placeholder
}

void Engine::generateOrb(int resolution) {
    orbMesh.clear();
    const float PI = 3.1415926535f;

    for (int i = 0; i <= resolution; ++i) {
        float v = 1.0f * i / resolution;
        float theta = v * PI;

        for (int j = 0; j <= resolution; ++j) {
            float u = 1.0f * j / resolution;
            float phi = u * 2.0f * PI;

            float x = std::sin(theta) * std::cos(phi);
            float y = std::cos(theta);
            float z = std::sin(theta) * std::sin(phi);

            std::cout << "v=" << v << " u=" << u
                      << " => theta=" << theta << " phi=" << phi
                      << " | x=" << x << " y=" << y << " z=" << z << "\n";

            orbMesh.push_back({x, y, z});
        }
    }
}


std::vector<std::tuple<float, float, float>> Engine::getMesh() const {
    std::vector<std::tuple<float, float, float>> output;

    for (const auto& v : orbMesh) {
        output.emplace_back(v.x, v.y, v.z);
    }

    return output;
}
