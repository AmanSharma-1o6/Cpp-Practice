#include<iostream>
using namespace std;
int main(){
    int n , a=1, b;
    cout<<"Enter n : " ; 
    cin>>n;
    while(n>1){
        b=n;
        a=a*b;
        n--;
    }
    cout<<a;
}