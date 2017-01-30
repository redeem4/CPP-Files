//*****************************************************
//Ernest Dale Webb
//1/29/17
// DayType Program:
// This program lets a user set the current day as well
//as getting various information from that including the
//next day, previous day, and the day in 'x' amount of days.
//*****************************************************

#include <iostream>
#include "dayType.h"

using namespace std;

int main()
{
    dayType aDay("Sunday");
    aDay.setDay("Thursday");
    aDay.print();
    cout << "\n\nToday is: " << aDay.getDay();
    cout << "\nTomorrow is: " << aDay.getNextDay() << endl;
    cout << "Yesterday is: " << aDay.getPrevDay() << endl;

    cout << "\nThursday + 5 is: " << aDay.addDays(5);
    return 0;
}
