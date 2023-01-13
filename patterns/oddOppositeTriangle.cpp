#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter No of Rows You want : ";
    cin>>n;
   
       for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i-1; j++)
        {
            cout<<" ";
        }
        // for (int k = 1 ; k <= 2*n+1-2*i; k++)
        // {
        //     cout<<"*";
        // }
        for (int k = 2*n+1-2*i ; k >=1 ; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}