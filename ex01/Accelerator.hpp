#pragma once
#include <iostream>
#include "Part.hpp"
using namespace std;

class Accelerator : public Part
{
    public:
        void print() override
        {
            cout << "Accelerator part" << endl;
        }
};