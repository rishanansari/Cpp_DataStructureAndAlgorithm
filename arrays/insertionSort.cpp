//Insertion Sort : the technique which use to insert play card in between.
// here first index "0" value considered to be sorted and store it in a variable, then initialize with index "1" and comapre it from stored variable.
// then perform shifting operation 
//out of the loop assign the variable value to initialize value.

#include<iostream>
using namespace std;

void is(int arr[] , int n){

for (int i = 1; i < n; i++)
{
    int key = arr[i]; //key variable to store the value
    int j = i-1;

    while (j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key; //here j+1 becz j-- alraedy takes place in inner loop, so (j+1 == j) here.
}
//for printing the sorted array
cout<<"Sorted Array "<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<"\t";
}

}



int main(){

int arr[]={8,1,5,12,4,16,9,2,7,10}; //declare and init array
int n = sizeof(arr)/sizeof(int); //found size of an array

is(arr , n); //calling of insertion sort function

    return 0;
}