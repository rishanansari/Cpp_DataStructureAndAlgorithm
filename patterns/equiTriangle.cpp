//pyramid pattern between space 
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *

#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
            cout<<" ";
        }
        for (int s = 1; s <=i; s++)
        {
            cout<<"* "; //after star we have to give space only.....
        }
        cout<<endl;
    }
        
        
    
    
}