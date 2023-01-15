//Write a programm to convert number into binary.
// 0<n<30000

#include<iostream>
using namespace std;

int main(){

    int num,bin;
    cout<<"Enter a number : ";
    cin>>num;
    if (num>30000 || num <=0 )
    {
        cout<<"Entered Number is out of range please enter 0<num<30000 "<<endl;
    }else{
    cout<<"The Binary form of "<<num<<" is (read Right to Left) : ";
    while (num>0)
    {
        bin=num%2;
        cout<<bin;
        num/=2;
    }
    }

    return 0;
}