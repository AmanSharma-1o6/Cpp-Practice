#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the percentage : ";
    cin>>x;
    if(x>=91){
        cout<<"Exellent";
    }
    else if(x>=71){
        cout<<"Very good";
    }
    else if(x>=51){
        cout<<"Can do better";
    }
    else{
        cout<<"Average";
    }
}