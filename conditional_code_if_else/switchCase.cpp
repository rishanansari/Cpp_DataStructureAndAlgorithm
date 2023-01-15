//write a program for a calculator by using switch case .

#include<iostream>
using namespace std;

int main(){

    int a,b,choice;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for substraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    cout<<"Enter the choice for operation : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<a/b;
        break;
    
    default: cout<<"Enter valid Number for operation";
        break;
    }
    return 0;
}