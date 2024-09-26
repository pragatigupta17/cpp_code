#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1-7) to find the corresponding day of the week: ";
    cin >> day;

    // Using switch statement to determine the day of the week
    switch(day) {
        case 1:
            cout << "Sunday" << "\n";
            break;
        case 2:
            cout << "Monday" << "\n";
            break;
        case 3:
            cout << "Tuesday" << "\n";
            break;
        case 4:
            cout << "Wednesday" << "\n";
            break;
        case 5:
            cout << "Thursday" << "\n";
            break;
        case 6:
            cout << "Friday" << "\n";
            break;
        case 7:
            cout << "Saturday" <<"\n";
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." <<"\n";
            break;
    }

    return 0;
}
