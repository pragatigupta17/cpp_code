#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, side, length, width, area;

    // Display menu options to the user
    cout << "Choose the shape to calculate the area:" << "\n";
    cout << "1. Circle" << "\n";
    cout << "2. Square" << "\n";
    cout << "3. Rectangle" << "\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Using switch statement to calculate the area based on the user's choice
    switch(choice) {
        case 1: // Calculate area of Circle
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius; // Area formula: πr²
            cout << "The area of the circle is: " << area << "\n";
            break;
        case 2: // Calculate area of Square
            cout << "Enter the side length of the square: ";
            cin >> side;
            area = side * side; // Area formula: side²
            cout << "The area of the square is: " << area << "\n";
            break;
        case 3: // Calculate area of Rectangle
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width; // Area formula: length × width
            cout << "The area of the rectangle is: " << area << "\n";
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 3." << "\n";
            break;
    }

    return 0;
}
