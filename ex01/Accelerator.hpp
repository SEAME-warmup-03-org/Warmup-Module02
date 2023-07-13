#pragma once
#include <iostream>
#include "Part.hpp"

class Accelerator : public Part
{
public:
    void print() override
    {
        std::cout << "Accelerator part" << std::endl;
    }

    Accelerator() {}
    Accelerator(const Accelerator& other) = default;
    ~Accelerator() {}
    Accelerator& operator=(const Accelerator& other) = default;
};
