#include <iostream>
using namespace std;

int main() {
    double income, tax;

    cout << "Enter your annual income: ";
    cin >> income;

    if (income < 500000)
        tax = 0;
    else if (income <= 1000000)
        tax = income * 0.20;
    else
        tax = income * 0.30;

    cout << "Income Tax = Rs. " << tax << endl;

    return 0;
}