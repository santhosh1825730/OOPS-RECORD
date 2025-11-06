#include <iostream>
using namespace std;

int main() {
    int count = 0;   // To count how many primes we have found
    int num = 2;     // Start checking from 2 (1 is not prime)

    cout << "First 10 prime numbers are: ";

    while (count < 10) {
        bool isPrime = true;

        // Check if num is prime
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
            count++;
        }

        num++;
    }

    cout << endl;
    return 0;
}
