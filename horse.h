//horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>

class Horse {
private:
    int position;
    int id;

public:
    Horse(int id);
    void advance();
    int getPosition() const;
    bool hasWon(int trackLength) const;
    void print() const;
};

#endif
