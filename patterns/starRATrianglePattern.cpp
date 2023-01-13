// STAR TRAINAGLE PATTERN USING FOR LOOP.
//OUTPUT *********** we can change it by user defined input...

//  * 
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *

#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
 return 0;   
}