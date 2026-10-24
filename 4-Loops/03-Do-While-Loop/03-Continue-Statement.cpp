#include <iostream>
using namespace std;

int main() {
    int n;

    do{
        cout << "Enter n: ";
        cin >>n;

        if(n % 10 == 0){
            continue;
        }
        cout << "You Entered : " << n << endl;
    }while(n > 0);
    
    return 0;
}