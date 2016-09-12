//******************************************************
// LeapYear program
// This program inputs a year and prints whether the year
// is a leap year or not
//******************************************************
#include <iostream>		// Access output stream

using namespace std;       // Access cout, endl, cin

bool IsLeapYear(int);	// Prototype for subalgorithm
int year = 2016;
int main()
{
    int year;			// Year to be tested
    cout << "Enter a year AD, for example, 1997."
         << endl;  		// Prompt for input
    cin >> year;      	// Read year

    if (IsLeapYear(year))      	// Test for leap year
        cout << year << " is a leap year."  << endl;
    else
        cout << year << " is not a leap year."  << endl;
    return 0;         	// Indicates successful
					//  completion
}

bool IsLeapYear(int year)
// IsLeapYear returns true if year is a leap year and
// false otherwise
{
    if(year % 4 != 0)        // Is year not divisible by 4?
        return false;         // If so, can't be a leap year
    else if(year % 100 != 0) // Is year not a multiple of 100?
        return true;          // If so, is a leap year
    else if(year % 400 != 0) // Is year not a multiple of 400?
        return false;	     	// If so, then is not a leap year
    else
        return true;   // Is a leap year

    if (year != true) {
        year++;
    }
}



