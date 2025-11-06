#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    Counter() {
        count++;  // Increment count whenever a new object is created
    }

    // Static member function to get the value of count
    static int getCount() {
        return count;
    }
};

// Initialize static member outside the class
int Counter::count = 0;

int main() {
    cout << "Initial count: " << Counter::getCount() << endl;  // 0

    Counter c1;
    Counter c2;

    cout << "Count after creating 2 objects: " << Counter::getCount() << endl;  // 2

    Counter c3;

    cout << "Count after creating another object: " << Counter::getCount() << endl;  // 3

    return 0;
}
