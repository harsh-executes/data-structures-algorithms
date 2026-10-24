#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int digSum = 0 ;

    while(n > 0){
        int dig = n % 10;
        digSum += dig;
        n = n/10;
    }

    cout << "Digit Sum = " << digSum << endl;
   return 0;
}