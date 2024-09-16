#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    cout << "Enter temperature in Celsius: "<<"\n";
    cin >> celsius;
    cout << "Enter temperature in fahrenheit: "<<"\n";
    cin >> fahrenheit;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    //covert Fahrenheit to Cesius
    celsius = (fahrenheit - 32)*5.0/9.0;

    // Output the result
    cout << "Temperature in Fahrenheit: " << fahrenheit <<"\n";
    cout <<"Temperature in celsius: " << celsius <<"\n";

    return 0;
}
