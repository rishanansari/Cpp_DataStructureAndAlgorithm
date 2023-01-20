//we can adiition the matrix of same size only.
//3x3 and 3x3  , 3x2 and 3x2 like this...

#include<iostream>
using namespace std;

int main(){

    int a[3][3];
    int b[3][3];
    int c[3][3];

    cout<<"Enter the elemets of matrix A"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the element of row "<<(i+1)<<endl;
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }

    cout<<"Enter the elements of matrix B"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the element of row "<<(i+1)<<endl;
        for (int j = 0; j < 3; j++)
        {
            cin>>b[i][j];
        }
        
    }
    cout<<"Here the sum of martix A and matrix B is "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    


    return 0;
}