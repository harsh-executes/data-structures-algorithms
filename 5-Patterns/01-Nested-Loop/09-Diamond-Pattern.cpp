#include <iostream>
using namespace std;
 
int main(){

    for(int i = 1; i <= 4 ; i++){
        for(int j = 4 ; j > i; j--){                  
            cout << " " << " ";
        }
        for(int k = 1 ; k <= i ; k++){
            cout << "*" << " ";
        }
        for(int p = 2 ; p <= i ; p++){
            cout <<"*" << " ";
        }
        cout << endl;
    }

    for(int i = 3; i >= 1 ; i--){
        for(int j = 4 ; j > i; j--){                  
            cout << " " << " ";
        }
        for(int k = 1 ; k <= i ; k++){
            cout << "*" << " ";
        }
        for(int p = 2 ; p <= i ; p++){
            cout <<"*" << " ";
        }
        cout << endl;
    }    
 
   return 0;
}