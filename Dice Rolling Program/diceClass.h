#ifndef DICETYPE_H_INCLUDED
#define DICETYPE_H_INCLUDED

class dice {
public:
    int roll();
    //Roll Method Rolls the dice and adds the total to the variable num.

    int getNum() const;
    //A getter method that returns the private num variable.

    void setNumberOfDice(int diceAmount);
    //A method used to set the number of times the dice will be rolled and sets the variable numberOfDice to that number.

    void resetNum();
    //A method used to reset the num variable back to zero, so that the total can be calculated correctly.

    dice();
    //Default constructor which sets all values to 0.
    int total;
    //A variable used to hold the total value of all the rolls.

private:
    int num; //Variable to hold number of the side rolled
    int numberOfDice; //Variable to hold how many times the dice is rolled

};

#endif // DICETYPE_H_INCLUDED
