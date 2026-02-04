// Race.cpp

#include<string>
#include <iostream>
#include "Race.h"

Race::Race(){
  trackLength = 15;

  for (int i = 0; i < NUM_HORSES; i++) {
    horses[i] = Horse(i + 1);
  }
} // end constructor

void Race::runRace(){
  bool winner = false;

  while (!winner) {
    for (int i = 0; i < NUM_HORSES; i++) {
      horses[i].advance();
      horses[i].print();

      if (horses[i].hasWon(trackLength)) {
        winner = true;
      }
    }
    std::cout << std::endl;
  }

  std::cout << "Race over! We have a winner!" << std::endl;
} // end runRace
