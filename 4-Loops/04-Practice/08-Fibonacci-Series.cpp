#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int a = 0;
    int b = 1;

    if(n == 1){
        cout << a << endl;
    }
    else if(n >= 2){
       cout << a << " " << b << " " ;

       for(int i = 2 ; i < n ; i++){
          int c = a + b;
          cout << c << " ";
          a = b;
          b = c;
        }
    cout << endl;
    }
   return 0;
}