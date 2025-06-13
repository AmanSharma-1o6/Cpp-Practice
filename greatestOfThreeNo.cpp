#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter given no. : ";
    cout<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
    cout<<a<<" is greatest";
    }
    if(b>=a && b>=c){
    cout<<b<<" is greatest";
    }
    if(c>=b && c>=b){
    cout<<c<<" is greatest";
    }

}
    