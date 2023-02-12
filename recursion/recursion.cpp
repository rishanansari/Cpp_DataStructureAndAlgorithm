//Recursio : the function calling it self called Recursive function
//to reduce the line of code 
//to simplify the complex problems into smallest pieces

//WRITE A PEOGRAM OF SUM OF A NUMBER by using RECURSION.



#include<iostream>
using namespace std;

int fun(int n){
    if (n==1) //base condition
    {
        return 1; //int data type that's why we are returning something.
    }else{
        return 1+fun(n-1); //recursive function with different argument.
    }
    
}

int main(){

cout<<fun(3);

    return 0;
}

//problem can solve with the help of 1: stack , 2:Recursive tree.
// fun(3)
//   ⬇️
//   1+fun(2)
//      ⬇️
//      1+fun(1)
//         ⬇️
//          1