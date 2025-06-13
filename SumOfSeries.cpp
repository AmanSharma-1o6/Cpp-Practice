#include<iostream>
using namespace std;
int main(){
    int n ;
    int a=0;
    cout<<"Enter n : " ; 
    cin>>n;
    for(int i=0 ; i<=n  ; i++){
        if(i%2==0){
           a+= -i ;
        }
        else{
            a+= i;
        }
    }
    cout<<a;
}