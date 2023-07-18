#include <iostream>
using namespace std;

int main()
{
    int sec, min, hr;
    int hr_to_sec, min_to_sec;
    cout << "Enter the value of second, minute and hour: ";
    cin >> sec >> min >> hr;

    // calculation
    min_to_sec = min * 60;
    hr_to_sec = hr * 3600;

    int total_seconds = sec + min_to_sec + hr_to_sec;
    cout << "The total seconds is " << total_seconds;
}