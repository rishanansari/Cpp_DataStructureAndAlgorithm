//factorial of a number by recursion
// let n=5 ---> fact of number is 5x4x3x2x1

#include<iostream>
using namespace std;

int fact(int n){

    if (n==1)
    {
        return 1;
    }else{
        return n*fact(n-1);
    }
    
}

int main(){

    int n;
    cout<<"Enter the number to find fact : ";
    cin>>n;
    cout<<fact(n);
    return 0;
}