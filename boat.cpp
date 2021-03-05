//
// Created by Keith Lancaster on 3/3/21.
//

#include "boat.h"
#include <iostream>

std::string name;
bool hasMotor;
int length;

Boat::Boat() {}

Boat::Boat(std::string name, bool hasMotor, int length)
{
    Boat::name = name;
    Boat::hasMotor = hasMotor;
    Boat::length = length;
}

std::string Boat::getName() const
{
    return name;
}

void Boat::setName(std::string name)
{
    Boat::name = name;
}


bool Boat::isHasMotor() const
{
    return hasMotor;
}


void Boat::setHasMotor(bool hasMotor)
{
    Boat::hasMotor = hasMotor;
}


int Boat::getLength() const
{
    return length;
}


void Boat::setLength(int length)
{
    Boat::length = length;
}

void Boat::sink()
{
    std::cout << Boat::getName() << " begins to sink from the holes it has. All "
    << getLength() << " feet of it goes below the sea." << std::endl;
}