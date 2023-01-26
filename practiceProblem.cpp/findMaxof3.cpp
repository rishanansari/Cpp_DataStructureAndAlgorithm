//Write a program to find the Maximum of 3 number.(user input)

#include<iostream>
using namespace std;

int main(){


    int a,b,c; //user input
    cout<<"Enter a value of A : ";
    cin>>a;
    cout<<"Enter a value of B : ";
    cin>>b;
    cout<<"Enter a value of C : ";
    cin>>c;

    cout<<"Given Number are : "<<a<<","<<b<<","<<c<<endl;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" -> a is greater";
        }
    }else if(b>c){
        cout<<b<<" -> b is greater";
    }else{
        cout<<c<<" -> c is greater";
    }
    
    return 0;
}