#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;              // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to reversed number
        num /= 10;                         // Remove the last digit
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
