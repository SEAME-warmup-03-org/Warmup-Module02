#pragma once
#include <iostream>
#include "Part.hpp"
using namespace std;

class Transmission : public Part
{
    public:
        void print() override
        {
            cout << "Transmission Part" << endl;
        }
};