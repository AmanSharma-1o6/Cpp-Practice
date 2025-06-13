#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int num;
    cin>>num;
    do{
        sum+=n;
        n--;
    }while(num<=n);
    cout<<sum;
}