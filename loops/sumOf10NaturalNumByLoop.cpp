
//Write a program of Sum of 10 Natural Number.

#include<iostream>
using namespace std;

int main(){
    //FOR LOOP EXECTUION
    int sum = 0;
    for (int i = 1; i <=10; i++)
    {
        sum =  sum + i;
        // cout<<sum<<" "; 
        // ----> this line will sum every num as a loop (ie. 1,3,6,10,15,21,28,36,45,55)
    }
    cout<<sum<<endl;
    //this line will execute after whole sum done and print sum of all num.

    // *******************************************************************************************************
    //WHILE LOOP EXECUTION.
    int sumOfNum = 0;
    int x =1;
    while (x<=10)
    {
        sumOfNum = sumOfNum +x;
        x++;
    }
    cout<<sumOfNum<<endl;

    // *******************************************************************************************************
    // DO-WHILE LOOP EXECUTION.
    int d=1;
    int sumofNaturalNum =0;
    do
    {
        sumofNaturalNum = sumofNaturalNum +d;
        d++;

    } while (d<=10);
    cout<<sumofNaturalNum<<endl;

    
    return 0;
}