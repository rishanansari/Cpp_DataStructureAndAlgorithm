//Hollow pattern any row and column
// 5*5 input ---> output

//  *  *  *  *  * 
//  *           * 
//  *           * 
//  *           * 
//  *  *  *  *  * 


#include<iostream>
using namespace std;

int main(){

    int r;
    cout<<"enter the value of rows for the hollow pattern : ";
    cin>>r;
    int c;
    cout<<"enter the value of column for the hollow pattern : ";
    cin>>c;

    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=c; j++)
        {
            // if(i==1 || i==r || j==1 || j==c) we can write it as a condition and Else part direct.
            if (i==1 || i==r)
            {
                cout<<" * ";
            }
            else if (j==1 || j==c)
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
    return 0;
}