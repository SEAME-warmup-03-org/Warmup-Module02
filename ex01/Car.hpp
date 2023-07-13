#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "Engine.hpp"
#include "Wheel.hpp"
#include "Brake.hpp"
#include "Transmission.hpp"
#include "Accelerator.hpp"

class Car
{
private:
    std::shared_ptr<Engine> engine_;
    std::shared_ptr<Wheel> wheels_[4];
    std::shared_ptr<Brake> brakes_[4];
    std::shared_ptr<Transmission> transmission_;
    std::shared_ptr<Accelerator> accelerator_;

    std::string make;
    std::string model;
    int year;
    int topSpeed;

public:
    Car() {}

    Car(const std::string& make_, const std::string& model_, int year_, int topSpeed_)
        : make(make_), model(model_), year(year_), topSpeed(topSpeed_)
    {
        engine_ = std::make_shared<Engine>();
        for (int i = 0; i < 4; i++)
            wheels_[i] = std::make_shared<Wheel>();
        for (int i = 0; i < 4; i++)
            brakes_[i] = std::make_shared<Brake>();
        transmission_ = std::make_shared<Transmission>();
        accelerator_ = std::make_shared<Accelerator>();
    }

    Car(const Car& object)
        : make(object.make), model(object.model), year(object.year), topSpeed(object.topSpeed)
    {
        engine_ = std::make_shared<Engine>();
        for (int i = 0; i < 4; i++)
            wheels_[i] = std::make_shared<Wheel>();
        for (int i = 0; i < 4; i++)
            brakes_[i] = std::make_shared<Brake>();
        transmission_ = std::make_shared<Transmission>();
        accelerator_ = std::make_shared<Accelerator>();
    }

    Car& operator=(const Car& object)
    {
        if (this != &object)
        {
            make = object.make;
            model = object.model;
            year = object.year;
            topSpeed = object.topSpeed;

            engine_ = std::make_shared<Engine>();
            for (int i = 0; i < 4; i++)
                wheels_[i] = std::make_shared<Wheel>();
            for (int i = 0; i < 4; i++)
                brakes_[i] = std::make_shared<Brake>();
            transmission_ = std::make_shared<Transmission>();
            accelerator_ = std::make_shared<Accelerator>();
        }
        return *this;
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

        std::cout << "Car Info: " << make << ' ' << model << ' ' << year << ' ' << topSpeed << std::endl;
    }

    ~Car()
    {
        std::cout << "destructor called" << std::endl;
    }
};
