#include<iostream>
using namespace std;
float area(int a){
    return 3.14*a*a ;
}
float circumference(int a){
    return 3.14*a*2 ;
}
int main(){
    int r;
    cout<<"Enter Radius : "; cin>>r;
    cout<<"Area is : ";
    cout<<area(r)<<endl;
    cout<<"Circumference is : ";
    cout<<circumference(r);
}