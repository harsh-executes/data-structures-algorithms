#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n ;

    bool isPrime = true;

    if(n < 2){
        isPrime = false;
    }

    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << n << " is a Prime Number"<< endl;
    }
    else{
        cout << n << " is NOT a Prime Number"<< endl;
    }
 
   return 0;
}