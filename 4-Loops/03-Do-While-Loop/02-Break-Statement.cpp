#include <iostream>
using namespace std;

int main() {
    int n;

    do{
        cout << "Enter n: ";
        cin >>n;

        if(n % 10 == 0){
            break;
        }
        cout << "You Entered : " << n << endl;
    }while(n > 0);

    cout << "Out of Loop Now" << endl;
    return 0;
}