#include<iostream>  
using namespace std;
int main(){
    int n;
    cout<<"Give decimal no. :"<<endl;
    cin>>n;
    int ans=0;
    int power=1;
    while (n>0){
    int last=n%2;
    ans=ans + last*power;
    power=power*10;
    n=n/2;
    }
    cout<<ans;
}