#pragma once
#include <iostream>
#include "Part.hpp"

class Transmission : public Part
{
public:
    void print() override
    {
        std::cout << "Transmission Part" << std::endl;
    }

    Transmission() {}
    Transmission(const Transmission& other) = default;
    ~Transmission() {}
    Transmission& operator=(const Transmission& other) = default;
};