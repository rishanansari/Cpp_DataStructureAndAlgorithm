// CALL BY REFERENCE / PASS BY REFERENCE : IF YOU CHANGE OF VARIABLE IN COPIED IT WILL CHNAGE IN ORIGINAL VARIABLE VALUE.
// SAME MEMEORY ADDRESS AND SPACE.

#include <iostream>
using namespace std;

void swap(int *p1, int *p2) // swap the variable via pointer
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << *p1 << " " << *p2 << endl; // output same 7 , 5.
}

int main()
{

    int a = 5;                     // varibale a in main
    int b = 7;                     // variable b in main
    swap(&a, &b);                  // swap the value via pointer variable and it is only using address that's why not chainging the value in original variable.
    cout << a << " " << b << endl; // output 7 , 5
    return 0;
}