#pragma once

#include <vector>
#include <tuple>
#include <string>

struct Vertex {
    float x, y, z;
};

class Engine {
public:
    Engine();

    void processFile(const std::string& path);  // Placeholder
    void generateOrb(int resolution);
    std::vector<std::tuple<float, float, float>> getMesh() const;

private:
    std::vector<Vertex> orbMesh;
};
