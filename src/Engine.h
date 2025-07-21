#pragma once

#include <vector>
#include <tuple>
#include <string>

class Engine {
public:
    Engine();
    void processFile(const std::string& path);
    std::vector<std::tuple<float, float, float>> getMesh() const;

private:
    std::vector<std::tuple<float, float, float>> meshData;
};
