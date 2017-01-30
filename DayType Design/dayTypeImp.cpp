#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

void dayType::print() const { //Prints Current Day
    cout << "Today is " << WEEKDAYS[weekDay];
}

string dayType::getNextDay() const { //Prints Next Day
    return WEEKDAYS[weekDay+1];
}

string dayType::getPrevDay() const { // Prints Previous Day
    return WEEKDAYS[weekDay-1];
}

string dayType::addDays(int nDays) { //Creates Variable to store new Number and processes it via modulo division if the number is over 8.
    weekDay = weekDay + nDays;

    if (weekDay >= 0) {
        return WEEKDAYS[weekDay%7];
    } else {
        cout << "You entered a incorrect number of days!"; //If user entered a negative value.
    }
}

void dayType::setDay(string day) { //Switches Entered Day and corresponds the variable Weekday to that number.
    if(day == "Sunday") {
        weekDay = 0;
    } else if(day == "Monday") {
        weekDay = 1;
    } else if(day == "Tuesday") {
        weekDay = 2;
    } else if(day == "Wednesday") {
        weekDay = 3;
    } else if(day == "Thursday") {
        weekDay = 4;
    } else if(day == "Friday") {
        weekDay = 5;
    } else if(day == "Saturday") {
        weekDay = 6;
    } else {
        cout << "Invalid Day.";
    }
}

string dayType::getDay() const {
    return WEEKDAYS[weekDay];
}

dayType::dayType() {
    weekDay = 0; //Default Value is the Beginning of the Week
}

dayType::dayType(string day) {
    if(day == "Sunday") {
        weekDay = 0;
    } else if(day == "Monday") {
        weekDay = 1;
    } else if(day == "Tuesday") {
        weekDay = 2;
    } else if(day == "Wednesday") {
        weekDay = 3;
    } else if(day == "Thursday") {
        weekDay = 4;
    } else if(day == "Friday") {
        weekDay = 5;
    } else if(day == "Saturday") {
        weekDay = 6;
    } else {
        cout << "Invalid Day.";
    }
}

