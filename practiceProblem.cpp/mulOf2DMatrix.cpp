//Multiplication of Matrix ..

#include<iostream>
using namespace std;

int main(){

    int a[3][3];
    int b[3][3];
    int c[3][3];

    cout<<"Enter the elements of Matrix A "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the element of row "<<(i+1)<<endl;
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        } 
    }
    cout<<"Enter the elements of Matrix B "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the element of row "<<(i+1)<<endl;
        for (int j = 0; j < 3; j++)
        {
            cin>>b[i][j];
        }  
    }
    cout<<"Multiplication of Matrix A and B is "<<endl;
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            int temp=0;
            for (int k = 0; k < 3; k++)
            {
                
                temp = temp + a[i][k]*b[k][j];
                c[i][j]=temp;
            }
            cout<<c[i][j]<<"\t";
            
        }
        cout<<endl;  
    }

    return 0;
}