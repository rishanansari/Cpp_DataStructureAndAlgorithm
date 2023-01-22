// Bubble sort is swapping the alternative index with each other.

#include<iostream>
using namespace std;

int main(){

    int arr[]={2,5,8,9,7,1};
    int temp;
    int n =sizeof(arr)/sizeof(int); //length of an array
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = 0; j < n-1-i ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            cout<<arr[j]<<"\t"; //iteration each swapping
        }
        cout<<endl;
    }
    
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<"\t";
}
    return 0;
}