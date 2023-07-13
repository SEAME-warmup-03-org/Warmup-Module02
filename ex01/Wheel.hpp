#pragma once
#include <iostream>
#include "Part.hpp"
using namespace std;

class Wheel : public Part
{
    public:
        void print() override
        {
            cout << "Wheel part" << endl;
        }
};