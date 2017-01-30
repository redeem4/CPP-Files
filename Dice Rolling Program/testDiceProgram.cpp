//*****************************************************
//Ernest Dale Webb
//1/30/17
// Dice Rolling Program:
//This program begins with asking the user with how many
//dice they would like to roll the dice and then the program
//shows the user the result of each dice roll and adds together
//each roll and shows the total.
//*****************************************************

#include <iostream>
#include "diceClass.h"

using namespace std;

main() {
int userNumberOfDice; //Variable to hold User's number of times to roll dice.
dice dice1; //Creates dice object


cout << "How many times do you wanna roll the dice? ";
cin >> userNumberOfDice;
dice1.setNumberOfDice(userNumberOfDice);
cout << "\nThese Are Each Roll's Total: \n";
for(int i = 0; i < userNumberOfDice; i++) { //Loops through each roll and prints each result.
    dice1.roll();
    cout << "Roll " << i << "'s Result is: " << dice1.getNum() << endl;
    dice1.total = dice1.total + dice1.getNum();
    dice1.resetNum();
}
dice1.roll();
cout << "\nYour Total Roll Amount is: " << dice1.total;
return 0;
}


