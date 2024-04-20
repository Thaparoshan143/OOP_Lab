#include<iostream>

enum WeekDays
{
	Sunday = 0,
	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5
};

WeekDays day = Wednesday;

int main()
{
    std::cout << "Days " << day << std::endl;
    return 0;
}