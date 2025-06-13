#include<iostream>
using namespace std; 
int add(int x1, int x2){
    int sum=x1 + x2 ;
    return sum;
}
int add(int x1, int x2 , int x3){
    int sum=x1 + x2 + x3 ;
    return sum;
}
float add(float x1, float x2){
    float sum=x1 + x2 ;
    return sum;
}
int main(){
    int a,b,c;
    float d,e;
    cin>>a>>b>>c>>d>>e;
    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(d,e)<<endl;
}