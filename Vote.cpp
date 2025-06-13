#include<iostream>
using namespace std;
int vote(int a){
    if(a>=18){
        cout<<"Eligible for vote ";
    }
    else{
        cout<<"Not eligible for vote ";
    }
    return 0;
}
int main(){
    int i;
    cout<<"Enter age : "; cin>>i; 
    cout<<endl;
    cout<<vote(i);
}