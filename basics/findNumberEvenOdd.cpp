#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter Your Number : ";
    cin>>num;
    if(num < 0){
        cout<<"Enter Value is Negative or invalid";
    }else if(num%2 != 0){
        cout<<"Entered Value is Odd";
    }else if(num%2 == 0){
        cout<<"Entered Value is Even";
    }

}