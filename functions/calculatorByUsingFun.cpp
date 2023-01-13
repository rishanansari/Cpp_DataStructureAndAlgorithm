#include<iostream>
using namespace std;

//Calculator by using function.
void add(int a , int b ){
    int c = a+b;
    cout<<"addition of "<<a<<" and "<<b<<" is = "<<c;
}
void sub(int a , int b ){
    int c = a-b;
    cout<<"substration of "<<a<<" and "<<b<<" is = "<<c;
}
void mul(int a , int b ){
    int c = a*b;
    cout<<"multiplication of "<<a<<" and "<<b<<" is = "<<c;
}
void division(int a , int b ){
    int c = a/b;
    cout<<"division of "<<a<<" and "<<b<<" is = "<<c;
}

int main(){

    int a,b,choice;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Choices for Operation to be performed"<<endl;
    cout<<" 1 for addition"<<endl;
    cout<<" 2 for substration"<<endl;
    cout<<" 3 for multiplication"<<endl;
    cout<<" 4 for division"<<endl;
    cout<<"Enter Number : ";
    cin>>choice;

if (choice == 1 ){
    add(a, b);
}else if (choice == 2)
{
    sub(a, b);
}else if (choice == 2)
{
    mul(a, b);
}else if (choice == 2)
{
    division(a, b);
}else{
    cout<<"Enter Valid Number";
}





    return 0;
}