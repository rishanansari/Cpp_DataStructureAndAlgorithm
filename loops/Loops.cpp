#include<iostream>
using namespace std;

int main(){
    //print hello 5 times by using for loop

    for (int i = 1; i <= 5; i++)
    {
        cout<<"Hello from For Loops\n";
    }

    //print 1 to 10 using for loop
    for (int i = 1; i <= 10; i++)
    {
        cout<<i<<endl;
    }
    // **************************************************************************
    //print Hello 5 times by using While Loop
    int i=1;
    while (i <= 5)
    {
        cout<<"Hello from While Loop\n";
        i++;
    }
    
    //print 10 natural number by using While Loop
    int x = 1;
    while (x <= 10)
    {
        cout<<x<<endl;
        x++;
    }
    
    //print Hello 5 time by using do-while loop 
    int d=1;
    do
    {
       cout<<"Hello from Do-While Loop"<<endl;
        d++;
    } while (d<=5);
    
    //print 10 Natural Number By Do-While Loop

    int y =1;
    do
    {
        cout<<y<<endl;;
        y++;
    } while (y<=10);
    
    return 0;
}
