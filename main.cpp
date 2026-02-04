#include <iostream>
#include "Horse.h"
#include "Race.h"

int main(){
  std::cout << "Hi there!" << std::endl;

  int trackLength = 15;

  Race theRace;
  std::cout << "Starting the race..." << std::endl;

  theRace.runRace();

} // end main

