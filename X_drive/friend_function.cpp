#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() : length(0) {}
    Box(int l) : length(l) {}

    // Declare friend function
    friend Box addBoxes(Box b1, Box b2);

    void display() {
        cout << "Length: " << length << endl;
    }
};

// Friend function definition
Box addBoxes(Box b1, Box b2) {
    Box temp;
    temp.length = b1.length + b2.length;  // Access private members directly
    return temp;
}

int main() {
    Box box1(10), box2(20);

    Box box3 = addBoxes(box1, box2);

    cout << "Box 1: ";
    box1.display();

    cout << "Box 2: ";
    box2.display();

    cout << "Sum of Box 1 and Box 2 lengths: ";
    box3.display();

    return 0;
}
