#include <iostream>
using namespace std;

int main() {

    //! double → int
    double a = 10.75;
    int b = (int)a;

    //@ float → int
    float c = 25.9f;
    int d = (int)c;

    //% int → char
    int e = 65;
    char f = (char)e;

    //~ int → double
    int g = 20;
    double h = (double)g;

    cout << "double to int: " << b << endl;
    cout << "float to int: " << d << endl;
    cout << "int to char: " << f << endl;
    cout << "int to double: " << h << endl;

    return 0;
}