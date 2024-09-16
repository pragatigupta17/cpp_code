#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    float radius, area;


    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area of the circle
    area = PI * radius * radius;


    cout << "Area of the circle is: " << area <<"\n";

    return 0;
}
