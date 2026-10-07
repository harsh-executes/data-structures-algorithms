#include <iostream>
using namespace std;

int main() {

    bool a = true;
    bool b = false;

    cout << (a || b) << endl;            // T || F => T
    cout << (false || false) << endl;   // F || F => F
    cout << (false || true) << endl;   // F || T => T
    cout << (true || true) << endl;   // T || T => T

    return 0;
}