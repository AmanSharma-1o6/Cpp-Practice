#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter  a digit n : ";
    cin>>n;
    int a=0;
    while(n>0){
        a++;
        n=n/10;
    }
    cout<<a;
}