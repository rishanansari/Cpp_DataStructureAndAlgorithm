// CALL BY VALUE / PASS BY VALUE : IT'S WORK WITIN THE SPACE --->  DIFFERENT COPIED CREATED
//  IF YOU CHANGE VALUE OF VARIABLE IN COPIEED VARIABLE , IT DOES NOT CAHNGE IN ORIGINAL VARIABLE VALUE.
// create differeny memeory allocation for copied variable.

#include <iostream>
using namespace std;

void fun(int a)
{
    a = 20;            // it create a different memeory allocation of same copied variable and its change within scope.
    cout << a << endl; // 20 output --> copied variable
}

int main()
{

    int a = 5; /// different memeory allocation
    fun(a);
    cout << a; // original variable value  ---> 5
    return 0;
}