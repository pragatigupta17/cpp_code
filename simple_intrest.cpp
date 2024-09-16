#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;


    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    // Formula for simple interest
    interest = (principal * rate * time) / 100;


    cout << "Simple Interest = " << interest << "\n";

    return 0;
}
