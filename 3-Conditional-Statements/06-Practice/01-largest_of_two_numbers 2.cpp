#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b)
        cout << "Largest = " << a << endl;
    else
        cout << "Largest = " << b << endl;

    return 0;
}