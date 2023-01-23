//Selection sort : find the minimum element from an array and then replace it from the start element.
// here every time the minimum element occupy the starting index so that the sub array reduce every passes from strating point.
//and also we are comparing the elements so passes will reduced by 1.

#include<iostream>
using namespace std;

int main(){

    int arr[]={5,7,9,2,3,1,6,4,8};
    int n = sizeof(arr)/sizeof(int); //length of an array
    int temp;

    cout<<"Given Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for (int i = 0; i < n-1; i++)
    {
    int min = i; // Assume the minimum elelment as 0th index
    for (int j = i+1 ; j < n; j++)
    {
        if (arr[j]<arr[min])
        {
            min =j; //if the jth index element is less than minimum element index then min=j;
        }
        
    }
    //swap(arr[min],arr[i]);
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    
    }
    //printing the sorted array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    

    return 0;
}




