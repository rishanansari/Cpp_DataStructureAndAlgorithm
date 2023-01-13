#include<iostream>
using namespace std;

//function always declare before the main function.
void fun(){
    cout<<"Hello";
}

int returnfun(){
    int a = 5;
    return a;
}

void add(int a1 , int b1){
    //int c=a1+b1;
    // return c; int as datatype and it will go to calling line in main function as result.
    cout<<a1+b1;
}



int main(){

    //function declaration , definition and calling 
   /* data_type functionName(returntype parameter, returntype parameter , so on){
        void is for return nothing.
        if any thing you want to return so write written type (int , char , float , double etc.)
    }*/
    // and inside the main fucntion there will be function calling.

    fun(); //function calling without passing arguments.

    int result=returnfun(); //store the retrun value of function in result integer.
    cout<<result;

    int a=5,b=6;
    add(a , b);


    return 0;
}