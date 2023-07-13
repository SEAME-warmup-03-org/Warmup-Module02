#pragma once
#include <iostream>
#include "Part.hpp"

class Brake : public Part
{
public:
    void print() override
    {
        std::cout << "Brake part" << std::endl;
    }

    Brake() {}
    Brake(const Brake& other) = default;
    ~Brake() {}
    Brake& operator=(const Brake& other) = default;
};
