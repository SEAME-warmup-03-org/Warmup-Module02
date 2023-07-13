#pragma once
#include <iostream>
#include "Part.hpp"
using namespace std;

class Engine : public Part
{
    public:
        void print() override
        {
            cout << "Engine part" << endl;
        }
};