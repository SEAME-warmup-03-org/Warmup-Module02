#pragma once
#include <iostream>
#include "Part.hpp"

class Wheel : public Part
{
public:
    void print() override
    {
        std::cout << "Wheel part" << std::endl;
    }

    Wheel() {}
    Wheel(const Wheel& other) = default;
    ~Wheel() {}
    Wheel& operator=(const Wheel& other) = default;
};
