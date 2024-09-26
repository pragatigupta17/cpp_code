#include <iostream>
using namespace std;
int main()
{
    double num1, num2, result;
    int choice;

    // Display menu options to the user
    cout << "Choose an operation to perform:" << "\n";
    cout << "1. Addition (+)" << "\n";
    cout << "2. Subtraction (-)" << "\n";
    cout << "3. Multiplication (*)" << "\n";
    cout << "4. Division (/)" << "\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Prompt user to enter two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Using switch-case to perform the desired operation based on user's choice
    switch(choice) {
        case 1: // Addition
            result = num1 + num2;
            cout << "The sum is: " << result << "\n";
            break;
        case 2: // Subtraction
            result = num1 - num2;
            cout << "The difference is: " << result << "\n";
            break;
        case 3: // Multiplication
            result = num1 * num2;
            cout << "The product is: " << result << "\n";
            break;
        case 4: // Division
            if(num2 != 0) {
                result = num1 / num2;
                cout << "The quotient is: " << result << "\n";
            } else {
                cout << "Error: Division by zero is not allowed." <<"\n";
            }
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << "\n";
            break;
    }

    return 0;
}
