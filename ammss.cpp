#include <iostream>
using namespace std ;
int main (){
    cout<<"Given No. +ve integer : ";
    int x;
    cin>>x;

    if(x<<0){
        cout<<"not positive";
        return 0;
    }
    if(x%2==0){
    cout<<"Even";
    }
    if(x%=1){
        cout<<"Odd";
    }

   return 0;
}