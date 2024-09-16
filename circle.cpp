#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    float radius, circumference;


    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the circumference of the circle
    circumference = 2 * PI * radius;


    cout << "Circumference of the circle is: " << circumference <<"\n";

    return 0;
}
