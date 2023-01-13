#include<iostream>
using namespace std;

//Multiplication of 5 Natural Number by using LOOP

int main(){
    //USING WHILE LOOP
    int i = 1;
    int mul = 1; //multiplication initialization with 1 always.

    while (i<=5)
    {
        mul = mul*i;
        i++;
    }
    cout<<mul<<endl;

    //USING FOR LOOP

    int multi =1;
    for (int x = 1; x <=5; x++)
    {
        multi = multi*x;
    }
    cout<<multi<<endl;

    //USING DO-WHILE LOOP
    int d =1;
    int multiple=1;
    do
    {
        multiple=multiple*d;
        d++;
    } while (d<=5);
    cout<<multiple<<endl;
    return 0;
}