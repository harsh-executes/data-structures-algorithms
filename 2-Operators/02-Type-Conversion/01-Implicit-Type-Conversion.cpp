#include <iostream>
using namespace std;

int main() {

    //! int → float
    int a = 10;
    float b = a;

    //@ float → double
    float c = 10.5f;
    double d = c;

    //$ char → int
    char ch = 'A';
    int e = ch;

    //* bool → int
    bool flag = true;
    int f = flag;

    cout << "int to float: " << b << endl;
    cout << "float to double: " << d << endl;
    cout << "char to int: " << e << endl;
    cout << "bool to int: " << f << endl;

    return 0;
}