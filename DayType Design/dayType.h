#ifndef H_dayType
#define H_dayType

#include <string>

constexpr const char* WEEKDAYS[] =
            {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

// Class to represent the days of the week
class dayType
{
public:
    // Display current day
    // Post: Display weekDay
    void print() const;

    // Display the following day
    // Post: Display current day + 1
    std::string getNextDay() const;

    // Display the previous day
    // Post: Display current day - 1
    std::string getPrevDay() const;

    // Calculate and return current day plus specified number of days
    // Pre: nDays contains an integer
    // Post: Add nDays to current day and return resulting day of week
    std::string addDays(int nDays);

    // Set the current day of the week
    // Pre: day contains a stringr

    // Post: weekDay is set to appropriate day of the week or -1 if invalid
    void setDay(std::string day);

    // Return the current day
    // Post: return string representing current day
    std::string getDay() const;

    // Default constructors
    dayType();

    // Constructor initializing the day
    dayType(std::string day);

private:
    // Hold integer representation of day of the week
    int weekDay;
};

#endif
