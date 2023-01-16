//Write a program a Number is prime or not.

#include<iostream>
using namespace std;

int main(){

    int num;
    int flag =  0;

    cout<<"Enter a Number : ";
    cin>>num;

    for (int i = 1; i <=num; i++)
    {
        if(num%i == 0){
            flag++;
        }
    }
    if(flag == 2){
        cout<<"Number is prime";
    }else{
        cout<<"Number is not prime";
    }
    
    

    return 0;
}