#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter marks of subject 1: ";
    cin >> a;

    int b;
    cout << "Enter marks of subject 2: ";
    cin >> b;

    int c;
    cout << "Enter marks of subject 3: ";
    cin >> c;

    int avg = (a + b + c) / 3;

    cout << "Average marks = " << avg << endl;

    return 0;
}