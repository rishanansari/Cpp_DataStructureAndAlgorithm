//address of array representation

//HEXA DECIMEL VALUES FOR THIS IS BASE16 -> 0-15 ==== 0-9 integer and 10=a , 11=b , 12=c , 13=d , 14=e , 15=f.




#include<iostream>
using namespace std;

int main(){

    int arr[7]={2,5,7,9,4,5,6};
    //arr it self give address of first element (0 index) (i.e. arr gives address of arr[0])
    //also we can find the address the using &arr[0] , &arr[1] so on...

    cout<<arr; //61fef4
    cout<<&arr[0]; //61fef4
    cout<<&arr[1]; //61fef8
    cout<<&arr[2]; //61fefc
    cout<<&arr[3]; //61ff00
    cout<<&arr[4]; //61ff04

// every digit of 61fef4 contain 4 bytes.
                    1111 0100 //-> 61fef4
---- ---- ---- ---- ---- ----
// +4 address is integer increase by 4 bytes.
                    1111 0100  // 61fef4 last 2 digit binary
                         0100 // 8421 4 byets plus
                    1111 1000 //answer become -> 61fef8
---- ---- ---- ---- ---- ----
                    1111 1000  // 61fef8 last 2 digit binary
                         0100 // 8421 4 byets plus
                    1111 1100 //answer become -> 61fefc
---- ---- ---- ---- ---- ----
               1110 1111 1100  // 61fefc last 3 digit binary
                         0100 // 8421 4 byets plus
               1111 0000 0000 //answer become -> 61ff00
---- ---- ---- ---- ---- ----
               1111 0000 0000  // 61ff00 last 2 digit binary
                         0100 // 8421 4 byets plus
               1111 0000 0100 //answer become -> 61ff04
---- ---- ---- ---- ---- ----

    return 0;
}