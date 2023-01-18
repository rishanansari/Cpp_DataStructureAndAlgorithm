//Search element from an array by linear search.
//only unique value/element in an array.

#include<iostream>
using namespace std;

int main(){

    int arr[8]={3,6,5,4,9,6,0,2};
    cout<<"Given Array is : ";
    for(int i=0 ; i<8 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int val , i;
    cout<<"Enter the value : ";
    cin>>val;

    for(i=0 ; i<8 ; i++){
        if (val == arr[i])
        {
            cout<<"Value is present"<<" at index of "<<i;
            break;
        } 
    }
    if(i==8){
            cout<<"Value not present";
        }
    return 0;
}


