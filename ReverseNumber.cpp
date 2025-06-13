#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0;
    cout<<"Enter  a digit n : ";
    cin>>n;
    while(n>0){
        b=n%10;
        a=a*10+b;
        n=n/10;
    }
    cout<<a;
}