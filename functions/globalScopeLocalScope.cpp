//GLOBAL SCOPE & LOCAL SCOPE .

// GLOBAL SCOPE: a varible which can be accessable from any where.
// LOCAL SCOPE: a variable wich only be accessable in block of {}.
  
#include<iostream>
using namespace std;

int a = 5;

void add(){
    int b = 4;
    a = 7;
    cout<<a+b<<endl; //11 local b and updated a
    cout<<b<<endl; //4 local scope
}


int main(){

    cout<<a<<endl; // 5 before add function
    // cout<<b; // local scope not print
    add();
    cout<<a<<endl; // 7 update the value of a from add function coz call by value.(global scope)
    // cout<<b; //local scope not print 

    return 0;
}