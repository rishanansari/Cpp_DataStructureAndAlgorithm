
//Write a Program to print Hollow Rhombus pattern of printing stars. 
//Input will contain the length of rhombus n.
// out put will be like (if n =3)

//      *  *  * 
//    *     *
//  *  *  *

#include<iostream>
using namespace std;

int main(){

char choice;
do
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int k = i; k < n; k++)
        {
            cout<<"  ";
        }
        
        for (int j = 1; j <=n; j++)
        {
            // if(i==1 || i==n || j==1 || j==n) we can write it as a condition and Else part direct.
            if (i==1 || i==n)
            {
                cout<<" * ";
            }
            else if (j==1 || j==n)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }

    cout<<"Do you want to continue : type -> y : ";
    cin>>choice;

} while (choice == 'y');

cout<<"Run code again";
    
    return 0;
}