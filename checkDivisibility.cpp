#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    if( x%5==0 || x%3==0){
    cout<<"Divisible By 5 or 3";
    }
    else{
    cout<<"Not Divisible by 5 or 3";
    }
}