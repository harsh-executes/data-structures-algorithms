#include <iostream>
using namespace std;

int main() {

    bool a = true;
    bool b = false;

    cout << (a && b) << endl;           // T && F => F
    cout << (false && false) << endl;  // F && F => F
    cout << (false && true) << endl;  // F && T => F
    cout << (true && true) << endl;  // T && T => T

    return 0;
}