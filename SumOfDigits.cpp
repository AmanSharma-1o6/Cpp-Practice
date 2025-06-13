#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0;
    cout<<"Enter  a digit n : ";
    cin>>n;
    

    while(n>0){
        b=n%10;
        a=a+b;
        n=n/10;
    }
    cout<<a;
}
// int a,b,c=0;
    // while(n>0){
    //     a=(n/10);
    //     b=(n-a*10);
    //     c=(c+b);
    //     n=(n/10);
    // }
    // cout<<c;{