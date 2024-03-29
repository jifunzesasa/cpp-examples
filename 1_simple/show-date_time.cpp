#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{

    time_t t = time(NULL);
    tm *timePtr = localtime(&t);

    cout << "seconds= " << (timePtr->tm_sec) << endl;
    cout << "minutes = " << (timePtr->tm_min) << endl;
    cout << "hours = " << (timePtr->tm_hour) << endl;
    cout << "day of month = " << (timePtr->tm_mday) << endl;
    cout << "month of year = " << (timePtr->tm_mon) + 1 << endl;
    cout << "year = " << (timePtr->tm_year) + 1900 << endl;
    cout << "weekday = " << (timePtr->tm_wday) << endl;
    cout << "day of year = " << (timePtr->tm_yday) << endl;
    cout << "daylight savings = " << (timePtr->tm_isdst) << endl;
    cout << endl;
    cout << endl;

    cout << "Date     " << (timePtr->tm_mday) << "/" << (timePtr->tm_mon) + 1 << "/" << (timePtr->tm_year) + 1900 << endl;
    cout << "Time     " << (timePtr->tm_hour) << ":" << (timePtr->tm_min) << ":" << (timePtr->tm_sec) << endl;
    return 0;
}

/*
OUTPUT
seconds= 6
minutes = 32
hours = 17
day of month = 4
month of year = 7
year = 2016
weekday = 1
day of year = 185
daylight savings = 1


Date     4/7/2016
Time     17:32:6
*/