#include<iostream>
using namespace std;

int main(){

    cout << "Please Enter Your Choice \n for Coffee Enter 1 , for Tea Enter 2 "<,endl;
    cout<<"Enter Your Choice Number : ";
    int choice;
    cin>>choice;
    if(choice == 1){
        cout<<"HURRAY!! Enjoy Your Coffee ☕"<<endl;
    }
    else if(choice == 2){
        cout<<"YUPP!! Enjoy Your Tea 🍵"<<endl;
    }
    else{
        cout<<"Please Enter Valid Choice , Thank you"; 
    }
    return 0;
}