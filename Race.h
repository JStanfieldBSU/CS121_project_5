#ifndef RACE_H
#define RACE_H

#include "Horse.h"

class Race
{
private:
    const static int NUM_HORSES = 5;
    const int TRACK_LENGTH = 15;

public:
    Horse horses[NUM_HORSES];
    Race();
    void start();
};

#endif