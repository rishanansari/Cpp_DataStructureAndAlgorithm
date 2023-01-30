//Break statment : use to break the condition and do not print after execution of code.
//Write a program to find a prime number between given 2 number;

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;

    for (i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            cout<<"Number is not prime";
            break;
        }
    
    }
    if (i==n)
    {
        cout<<"Number is prime";
    }
    
     
    
    





    return 0;
}
