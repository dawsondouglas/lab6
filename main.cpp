#include <iostream>
#include "boat.h"
#include "sailboat.h"

/*
 * Instructions:
 * This code will not compile as-is. Begin by trying to get the code to compile.
 *
 * Review the header files for boat and sailboat. Create an appropriate public inheritance
 * relationship between the classes.
 * If appropriate, move the attributes from one class to the other.
 * Implement the boat and sailboat classes in the corresponding cpp files
 * Add getters and setters for both classes, as well as default and parameterized constructors
 * You do not need to create a copy constructor
 * Add const as is appropriate to methods
 *
 * Modify the code below to create the boat and sailboat using the parameterized constructors you created.
 *
 */

int main() {
    Boat boat("Boat",true,32); // change this
    boat.sink();
    SailBoat sailBoat("Sail Boat",64,3); // change this
    sailBoat.sink();
    return 0;
}
