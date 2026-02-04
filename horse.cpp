// Horse.cpp

#include<string>
#include <iostream>
#include "horse.h"

Horse::Horse(){
  Horse::position = 0;
  Horse::id = 0;
} // end deafault constructor

Horse::Horse(int id){
  Horse::position = 0;
  Horse::id = id;
} // end constructor
void Horse::advance(){
  // 50/50 chance to move forward
  if (rand() % 2 == 1) {
    Horse::position++;
  }
} // end advance

int Horse::getPosition() const{
  return position;
} // end getPosition

bool Horse::hasWon(int trackLength) const{
  return position >= trackLength;
} // end hasWon

void Horse::print() const{
  std::cout << "Horse " << id << ": ";
  for (int i = 0; i < position; i++) {
    std::cout << "-";
  }
  std::cout << "🐎" << std::endl;
} // end print

