#include <iostream>
using namespace std;
int main()
 {
    int hours, minutes;
    cout << "Enter hours (0-23): ";
    cin >> hours;
    cout << "Enter minutes (0-59): ";
    cin >> minutes;

    // Ensure the time entered is valid
    if(hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Invalid time entered!" << "\n";
        return 1;
    }

    // Determine if AM or PM using switch-case
    switch(hours / 12) {
        case 0: // For 0-11 hours
            cout << "Time is " << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " AM" << "\n";
            break;
        case 1: // For 12-23 hours
            cout << "Time is " << (hours == 12 ? 12: hours - 12) << ":" << (minutes < 10 ? "0" : "")<< minutes << " PM" << "\n";
            break;
    }

    return 0;
}
