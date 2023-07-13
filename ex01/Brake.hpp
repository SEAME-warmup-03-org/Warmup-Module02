#pragma once
#include <iostream>
#include "Part.hpp"
using namespace std;

class Brake : public Part
{
    public:
        void print() override
        {
            cout << "Brake part" << endl;
        }
};