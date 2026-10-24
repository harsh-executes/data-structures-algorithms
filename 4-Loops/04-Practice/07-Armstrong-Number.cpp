#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int originalNumber = n;
    int cubeSum = 0;

    while(n > 0){
        int digit = n % 10;
        cubeSum += digit * digit * digit;
        n = n /10;
    }

    if(cubeSum == originalNumber){
        cout << originalNumber << " is an Armstrong Number" << endl;
    }
    else{
         cout << originalNumber << " is NOT an Armstrong Number" << endl;
    }
 
   return 0;
}