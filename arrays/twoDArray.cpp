//2D ARRAY : is a collection of 1D array.
// (in a MATRIX  / TABULAR FORMATE)

// Declartion
// 1D ARRAY : int arr[size];
// 2D ARRAY : int arr[no.of rows][no.of coloumns];

// initialzation
// 1D ARRAY : int arr[5] = {5,2,4,8,9};
// 2D ARRAY : int arr[4][3]={{2,5,6},{1,2,8},{8,7,9},{1,7,3}};

// 1D ARRAY CONTAIN 1 LOOOOP
// 2D ARRAY CONTAIN 2 LOOOOP

#include<iostream>
using namespace std;

int main(){
    
    int arr[4][3];

    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter the value for row "<<(i+1)<<endl;
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Here your matrix 💗"<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    

    return 0;
}

