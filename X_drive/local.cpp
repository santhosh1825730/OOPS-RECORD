#include <iostream>
using namespace std;

void demoLocalClass() {
    // Local class definition inside this function
    class Local {
    private:
        int value;

    public:
        Local(int v) : value(v) {}

        void show() {
            cout << "Value inside local class: " << value << endl;
        }
    };

    // Create an object of the local class
    Local obj(42);
    obj.show();
}

int main() {
    demoLocalClass();

    // Note: You cannot create Local objects here, as the class
    // is local to demoLocalClass()

    return 0;
}
