#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Conversion formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit << "°F" << endl;

    return 0;
}
