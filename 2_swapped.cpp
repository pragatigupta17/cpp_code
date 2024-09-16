#include <iostream>
using namespace std;
int main()
{
int number1;
int number2;
int temp;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    // Display original values
    cout << "Before swapping: " << "\n";
    cout << "Number 1 = " << number1 <<"\n";
    cout << "Number 2 = " << number2 <<"\n";

    // Swap the numbers using a temporary variable
    temp = number1;
    number1 = number2;
    number2 = temp;

    // Display swapped values
    cout << "After swapping: " << "\n";
    cout << "Number 1 = " << number1 <<"\n";
    cout << "Number 2 = " << number2 << "\n";

    return 0;
}
