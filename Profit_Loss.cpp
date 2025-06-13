#include<iostream>
using namespace std;
int main(){
    int CP;
    cout<<"Cost Price Of Item : ";
    cin>>CP;
    int SP;
    cout<<"Selling Price Of Item : ";
    cin>>SP;
    if(CP<SP){
        cout<<"Profit of : ";
        cout<<SP-CP;
    }
    if(CP>SP){
        cout<<"Loss of : ";
        cout<<CP-SP;
    }
    if(CP==SP){
        cout<<"No Loss or Profit";
    }
}