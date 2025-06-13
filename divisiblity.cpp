#include<iostream>
using namespace std;
int main(){
int x;
    cout<<"Enter a Number : ";
    cin>>x;
    if( ( x%5==0 || x%3==0 ) && x%15!=0){
    cout<<"Divisible By 5 or 3 but not 15";
    }
    // if( ( x%5!=0 && x%3!=0 ) ){
    // cout<<"Not divisible By 5 or 3";
    // }
    else{
        cout<<"Not divisible By 5 or 3";
    }
}