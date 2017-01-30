#include <iostream>
#include <cstdlib>
#include "diceClass.h"

using namespace std;

int dice::roll() {
    num = rand()%6 + 1;
}

int dice::getNum() const {
    return num;
}

 void dice::setNumberOfDice(int diceAmount) {
    numberOfDice = diceAmount;
 }

 void dice::resetNum() {
    num = 0;
 }

dice::dice() {
    num = 0;
    numberOfDice = 0;
    total = 0;
}
