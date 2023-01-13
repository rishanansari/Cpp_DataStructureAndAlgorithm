//SOLID SQUARE STAR PATTERN USING FPOR LOOP
// 5 input ---> output

//  *  *  *  *  * 
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *



#include<iostream>
using namespace std;

int main(){
    
    //Already defined number/input, By using FOR loop.
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <=5; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    //USER DEFINED INPUT / SOLID SQUARE PATTERN BY USING WHILE LOOP. 
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;
        i++;
    }

    return 0;
}