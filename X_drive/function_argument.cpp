#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to add time passed as object argument
    void addTime(const Time &t) {
        seconds += t.seconds;
        minutes += t.minutes + seconds / 60;
        seconds %= 60;

        hours += t.hours + minutes / 60;
        minutes %= 60;
    }

    void display() const {
        cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

int main() {
    Time t1(2, 45, 50);
    Time t2(1, 20, 30);

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    t1.addTime(t2);

    cout << "After adding Time 2 to Time 1: ";
    t1.display();

    return 0;
}
