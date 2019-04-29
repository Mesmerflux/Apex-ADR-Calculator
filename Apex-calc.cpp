#include <iostream>

int main() {

int total_dmg;
int games;

std::cout << "What is your total damage done?: ";
std::cin >>total_dmg;

std::cout << "\nHow many games have you played?:";
std::cin >> games;

int avg_dmg = total_dmg / games;

std::cout << "\nyour Average Damage per Round(ADR) is: " <<avg_dmg<< '\n';

  return 0;
}
