//
// Created by Keith Lancaster on 3/3/21.
//

#ifndef MIDTERM_REVIEW_KL_SPEEDBOAT_H
#define MIDTERM_REVIEW_KL_SPEEDBOAT_H

#include "boat.h"

class SailBoat : public Boat {
    int numSails;
    
    public:
    SailBoat();
    SailBoat(std::string name, int length, int numSails);

    int getNumSails() const;
    void setNumSails(int numSails);
    void sink() override;
};


#endif //MIDTERM_REVIEW_KL_SPEEDBOAT_H
