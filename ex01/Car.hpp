#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "Engine.hpp"
#include "Wheel.hpp"
#include "Brake.hpp"
#include "Transmission.hpp"
#include "Accelerator.hpp"
using namespace std;

class Car
{
private:
    shared_ptr<Engine> engine_;
    shared_ptr<Wheel> wheels_[4];
    shared_ptr<Brake> brakes_[4];
    shared_ptr<Transmission> transmission_;
    shared_ptr<Accelerator> accelerator_;

    string make;
    string model;
    int year;
    int topSpeed;

public:
    Car(string make_, string model_, int year_, int topSpeed_)
        : make(make_), model(model_), year(year_), topSpeed(topSpeed_)
    {
        engine_ = make_shared<Engine>();
        for (int i = 0; i < 4; i++)
            wheels_[i] = make_shared<Wheel>();
        for (int i = 0; i < 4; i++)
            brakes_[i] = make_shared<Brake>();
        transmission_ = make_shared<Transmission>();
        accelerator_ = make_shared<Accelerator>();
    }

    Car(Car &object)
        : make(object.make), model(object.model), year(object.year), topSpeed(object.topSpeed)
    {
        engine_ = make_shared<Engine>();
        for (int i = 0; i < 4; i++)
            wheels_[i] = make_shared<Wheel>();
        for (int i = 0; i < 4; i++)
            brakes_[i] = make_shared<Brake>();
        transmission_ = make_shared<Transmission>();
        accelerator_ = make_shared<Accelerator>();
    }

    void operator=(Car &object)
    {
        make = object.make;
        model = object.model;
        year = object.year;
        topSpeed = object.topSpeed;

        engine_ = object.engine_;
        for (int i = 0; i < 4; i++)
            wheels_[i] = object.wheels_[i];
        for (int i = 0; i < 4; i++)
            brakes_[i] = object.brakes_[i];
        transmission_ = object.transmission_;
        accelerator_ = object.accelerator_;
    }

    void printParts()
    {
        engine_->print();
        for (int i = 0; i < 4; i++)
        {
            wheels_[i]->print();
            brakes_[i]->print();
        }
        transmission_->print();
        accelerator_->print();

        cout << "Car Info: " << make << ' ' << model << ' ' << year << ' ' << topSpeed << endl;
    }

    ~Car()
    {
        cout << "destructor called" << endl;
    }
};
