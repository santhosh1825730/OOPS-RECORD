#include<iostream>
#include<iomanip>
using namespace std;

class ElectricityBill {
private:
    int consumerNo;
    string consumerName;
    int prevReading;
    int currReading;
    string connectionType;
    int unitsConsumed;
    double billAmount;

public:
    // Input details
    void inputDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cin.ignore(); // clear input buffer before getline
        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Previous Month Reading: ";
        cin >> prevReading;
        cout << "Enter Current Month Reading: ";
        cin >> currReading;
        cout << "Enter Type of EB connection (domestic/commercial): ";
        cin >> connectionType;

        // Convert connectionType to lowercase for case-insensitive comparison
        for (auto &c : connectionType) {
            c = tolower(c);
        }

        unitsConsumed = currReading - prevReading;
        if (unitsConsumed < 0) {
            cout << "Error: Current reading cannot be less than previous reading.\n";
            unitsConsumed = 0;
        }
    }

    // Calculate bill based on tariff
    void calculateBill() {
        int units = unitsConsumed;
        billAmount = 0.0;

        if (connectionType == "domestic") {
            if (units <= 100) {
                billAmount = units * 1.0;
            }
            else if (units <= 200) {
                billAmount = 100 * 1.0 + (units - 100) * 2.5;
            }
            else if (units <= 500) {
                billAmount = 100 * 1.0 + 100 * 2.5 + (units - 200) * 4.0;
            }
            else {
                billAmount = 100 * 1.0 + 100 * 2.5 + 300 * 4.0 + (units - 500) * 6.0;
            }
        }
        else if (connectionType == "commercial") {
            if (units <= 100) {
                billAmount = units * 2.0;
            }
            else if (units <= 200) {
                billAmount = 100 * 2.0 + (units - 100) * 4.5;
            }
            else if (units <= 500) {
                billAmount = 100 * 2.0 + 100 * 4.5 + (units - 200) * 6.0;
            }
            else {
                billAmount = 100 * 2.0 + 100 * 4.5 + 300 * 6.0 + (units - 500) * 7.0;
            }
        }
        else {
            cout << "Invalid connection type entered.\n";
            billAmount = 0;
        }
    }

    // Display bill details
    void displayBill() const {
        cout << fixed << setprecision(2);
        cout << "\n----- Electricity Bill -----\n";
        cout << "Consumer Number: " << consumerNo << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Connection Type: " << connectionType << endl;
        cout << "Previous Reading: " << prevReading << endl;
        cout << "Current Reading: " << currReading << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Total Bill Amount: Rs. " << billAmount << endl;
        cout << "----------------------------\n";
    }
};

int main() {
    ElectricityBill a1;
    a1.inputDetails();
    a1.calculateBill();
    a1.displayBill();

    return 0;
}

