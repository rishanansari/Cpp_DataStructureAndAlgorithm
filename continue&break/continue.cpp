//continue statements are those which use for skipping the value (truth condition).
//Write a program of the number between 1 to 100 with skip multiple of 3.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value : ";
    cin>>n;

    for (int i = 1; i <=n; i++) 
    {
        if (i%3 == 0)
        {
            continue;// this will skip the multiple of 3.
        }else{
            cout<<i<<" ";
        }
        
    }
    



    return 0;
}