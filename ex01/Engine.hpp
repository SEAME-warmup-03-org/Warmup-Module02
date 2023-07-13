#pragma once
#include <iostream>
#include "Part.hpp"

class Engine : public Part
{
public:
    void print() override
    {
        std::cout << "Engine part" << std::endl;
    }

    Engine() {}
    Engine(const Engine& other) = default;
    ~Engine() {}
    Engine& operator=(const Engine& other) = default;
};
