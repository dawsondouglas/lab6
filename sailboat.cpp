//
// Created by Keith Lancaster on 3/3/21.
//

#include "sailboat.h"
#include <iostream>

SailBoat::SailBoat()
{
    setHasMotor(false);
}

SailBoat::SailBoat(std::string name, int length, int numSails)
{
    SailBoat::setName(name);
    SailBoat::setLength(length);
    SailBoat::numSails = numSails;
    SailBoat::setHasMotor(false);
}

int SailBoat::getNumSails() const
{
    return numSails;
}


void SailBoat::setNumSails(int numSails)
{
    numSails = numSails;
}

void SailBoat::sink()
{
    std::cout << SailBoat::getName() << " begins to sink from the holes it has. It loses its " << SailBoat::getNumSails() <<
    " sails as the sea claims it for its own, taking the " << getLength() << " footer under." << std::endl;
}