#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter side a : "; cin>>a;
    cout<<"Enter side b : "; cin>>b;
    cout<<"Enter side c : "; cin>>c;
    if( ((a+b)>c)  && ((c+b)>a) && ((c+a)>b) ){
        cout<<"Forms triangle";
    }
    else{
        cout<<"Not forms triangle";
    }
}