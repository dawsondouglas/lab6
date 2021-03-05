//
// Created by Keith Lancaster on 3/3/21.
//

#ifndef MIDTERM_REVIEW_KL_BOAT_H
#define MIDTERM_REVIEW_KL_BOAT_H

#include <string>

class Boat {
    std::string name;
    bool hasMotor;
    int length;

    public:
    Boat();
    Boat(std::string name, bool hasMotor, int length);

    std::string getName() const;
    void setName(std::string name);
    bool isHasMotor() const;
    void setHasMotor(bool hasMotor);
    int getLength() const;
    void setLength(int length);
    virtual void sink();
};


#endif //MIDTERM_REVIEW_KL_BOAT_H
