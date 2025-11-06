#include <iostream>
#include <iomanip>  // For formatted output
using namespace std;

class Employee {
private:
    string name;
    int id;
    float basicPay;
    float da, hra, grossSalary, tax, netSalary;

public:
    // Function to get employee details
    void getDetails() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Basic Pay: ";
        cin >> basicPay;
    }

    // Function to calculate salary components
    void calculateSalary() {
        da = basicPay * 0.70;          // 70% of basic pay
        hra = basicPay * 0.10;         // 10% of basic pay
        grossSalary = basicPay + da + hra;
        tax = grossSalary * 0.20;      // 20% tax
        netSalary = grossSalary - tax;
    }

    // Function to display payslip
    void displayPayslip() {
        cout << "\n========== EMPLOYEE PAYSLIP ==========\n";
        cout << "Employee Name     : " << name << endl;
        cout << "Employee ID       : " << id << endl;
        cout << fixed << setprecision(2); // Display with 2 decimal places
        cout << "Basic Pay         : " << basicPay << endl;
        cout << "Dearness Allowance: " << da << endl;
        cout << "House Rent Allow. : " << hra << endl;
        cout << "--------------------------------------" << endl;
        cout << "Gross Salary      : " << grossSalary << endl;
        cout << "Tax (20%)         : " << tax << endl;
        cout << "--------------------------------------" << endl;
        cout << "Net Salary        : " << netSalary << endl;
        cout << "======================================\n";
    }
};

int main() {
    Employee emp;        // Create an Employee object
    emp.getDetails();    // Input employee details
    emp.calculateSalary(); // Calculate salary details
    emp.displayPayslip();  // Display the payslip

    return 0;
}
