#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int originalNumber = n;
    int reversedNumber = 0;

    while(n > 0){
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n = n / 10;
    }

    if(reversedNumber == originalNumber){
    cout << originalNumber << " is a Palindrome" << endl;
    }
    
    else{
    cout << originalNumber << " is Not a Palindrome" << endl;
    }

    return 0;
}