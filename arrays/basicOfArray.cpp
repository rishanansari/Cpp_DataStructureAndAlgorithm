//what is array : collection of homogenous(similar) data which store information in contigunous(sequence) fashion.
//why we need : anology : sum of random number (5,10,2,6,8...) take a memory space and provide index with variable arr;
// int arr[size]={5,10,2,6,8,...};
//how to implement : data_type variableName[size of array]={elements , ...};

#include<iostream>
using namespace std;

int main(){

    int arr[5]={4,3,5,6,7}; //5 is size

    // cout<<arr[0]; //0 index value 4
    // cout<<arr[1]; //1 index value 3
    // cout<<arr[2]; //2 index value 5
    // cout<<arr[3]; //3 index value 6
    // cout<<arr[4]; //4 index value 7

    // int array[5]; //take user inputs
    // cin>>a[0];
    // cin>>a[1];
    // cin>>a[2];
    // cin>>a[3];
    // cin>>a[4];

// if we have 50 items to be taken so we don't go for every time cin (go for LOOPS).
int array[5];
for (int i = 0; i < 5; i++)
{
    cout<<"enter element : ";
    cin>>array[i];
}
cout<<"Your array elemnts are : ";
for (int i = 0; i < 5; i++)
{
    
    cout<<array[i];
}

    return 0;
}   