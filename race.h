// Race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "Horse.h"

// a horse race
class Race {
private:
    const static int NUM_HORSES = 5;
    Horse horses[NUM_HORSES];
    int trackLength;

public:
    Race();
    void runRace();
};

#endif

