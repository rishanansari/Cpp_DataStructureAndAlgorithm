//Binary Search is the way to seaching element from an array as it is sorted.
//(for sorted array BINARY SEARCH approach is better than LINEAR SEARCH)
//here we go always go with middle element of array..the apply condition wheather given nuber is on right or left side (sub array) , then for each condition again same procedure will repeat so we need LOOOOOP here.

//LET SEE EXAMPLE.
#include<iostream>
using namespace std;

int main(){

    int arr[]={10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int); // formula to find any array length
    cout<<"Size of an given Array is : "<<n<<endl; //size of an array 7

    // int val=70; //input define.
    int val; //user input
    cout<<"Enter the element to be found : ";
    cin>>val;
    int s=0 , e=n-1; //starting index and ending index.

    int flag = -1; //flag -1 coz index is alraedy 0 .

    while(s<=e){
    int mid = (s+e)/2;

    if(val == arr[mid]){
        flag = mid;
        // cout<<"Element is present "<<mid;
        break;
    }else if (val<arr[mid])
    {
        // move to left
        e = mid-1;
    }else{
        // move right
        s = mid +1 ;
    }
    }
    if(flag == -1){
        cout<<"element not found";
    }else{
        cout<<"element found at index no "<<flag;
    }
    
    



    return 0;
}

