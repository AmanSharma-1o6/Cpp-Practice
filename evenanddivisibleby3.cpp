#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an integer  : ";
    cin>>a;
    if(a%2==0){
        if(a%3==0){
            cout<<"Even and divisible by 3 ";
        }
        else{
            cout<<"Even but not divisible by 3";
        }
    }
    else{
        cout<<"Odd";
    }
}