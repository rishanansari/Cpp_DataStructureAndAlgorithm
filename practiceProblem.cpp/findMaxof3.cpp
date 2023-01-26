//Write a program to find the Maximum of 3 number.(user input)

#include<iostream>
using namespace std;

int main(){


    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<"a is grater";
        }else{
            cout<<"c is greater";
        }
        
    }
    


    return 0;
}