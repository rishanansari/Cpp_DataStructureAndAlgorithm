// Given an array a[ ] of size *‘n-1’* with integers in the range of *[1,n].* There are no duplicates in the list.

// Write a program to find the missing number from the first **n** integers.

// Consider example n=5;  a[ ]= { 2, 5, 1, 3}; 

// n=5 means Range[1,5]. Output should be the missing number between 1 to 5. So 4 is the output as per the given array. 

// *Note:* Find the missing number in O(n) time and constant space.
// ## Test case →

// 1.  a[ ] = { 3, 6, 1, 5, 4} , n=6
// 2.  a[ ] = { 8, 3, 2, 1, 5, 4, 7} , n=8
// 3.  a[ ] = { 3, 2, 4, 5} , n=5

#include<iostream>
using namespace std;

int main(){

    int arr[]={3,2,4,5};
    int n=5;
    int x = n-1;
    int temp;

    for (int i = 0; i < x-1; i++)
    {
        for (int j = 0; j < x-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    cout<<"Sorted Array "<<endl;
    for(int i=0 ; i<x ;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    int num =1;
    for (int i = 0; i <=n-1; i++)
    {
        
        if (arr[i] == num)
        {
            num++;
        }else{
            cout<<"The missing number is : "<<num;
            break;
        }
    }
    

    return 0 ;
}