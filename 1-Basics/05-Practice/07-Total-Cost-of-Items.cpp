#include <iostream>
using namespace std;
 
int main(){
    float pencil;
    cout << "Enter Pencil Price :";
    cin >> pencil;

    float pen;
    cout << "Enter Pen Price :";
    cin >> pen;

    float eraser;
    cout << "Enter Eraser Price :";
    cin >> eraser;

    float totalBill = pencil + pen + eraser;

    float totalBill_IncludingGST = (pencil + pen + eraser) * 0.18 + totalBill;

    cout << "Total Bill = " << totalBill << endl;
    cout << "Total bill including GST = " << totalBill_IncludingGST << endl;


   return 0;
}