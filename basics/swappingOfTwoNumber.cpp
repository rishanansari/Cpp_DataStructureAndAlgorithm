#include<iostream>
using namespace std;

int main(){
    int a = 7;
    cout<<"Value of a is "<<a<<endl;
    
    int b = 3;
    cout<<"Value of b is "<<b<<endl;

    //swapping
    int c = a;
    a = b;
    b = c;

    cout<<"After Swapping"<<endl;

    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;




    return 0;
}