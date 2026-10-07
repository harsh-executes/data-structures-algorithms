#include <iostream>
#define PI 3.14
using namespace std;

int main() {
    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    float area = PI * radius * radius;

    cout << "Area = " << area << endl;

    return 0;
}