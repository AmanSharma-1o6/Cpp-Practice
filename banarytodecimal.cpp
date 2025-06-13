#include<iostream>
#include<cmath>  
using namespace std;
int main(){
    int n;
    cout<<"Give binary no. :"<<endl;
    cin>>n;
    int num=0 , power=1;
    while (n>0){
    int last=n%10;
    num=last*power;
    power=power*2;
    n=n/10;
    }
    cout<<num;
}