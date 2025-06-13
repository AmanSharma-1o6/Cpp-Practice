#include<iostream>
using namespace std;
int main(){
    // while loop
    int a,sum=0,i=1;//loop variable i
    cout<<"Enter a Natural number : ";
    cin>>a;
    while(i<=a){ //condition
        sum+=i ;
        i++;//updating loop variable
    }
    cout<<"Sum till the given natural numbers is :  "<<sum<<endl;
    // for loop
    int n,sam;
    cin>>n;
    for(int i=1; i<=n ; i++){
        sam+=i;
    }
    cout<<sum;

}