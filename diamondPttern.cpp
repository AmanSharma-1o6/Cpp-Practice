#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give value of n :"<<endl;
    cin>>n;
    for(int j=1; j<=2*n-1 ; j++){
    for(int i=1 ; i<=(n-j) and j<=n ; i++ ){
        cout<<" ";
       }
       for(int a=65; a<=(2*j-1)+64 and j<=n; a++){
        cout<<(char)a;}
    for(int i=1 ; i<(j-n+1) and j>n and i>0 ; i++ ){
        cout<<" ";
       }
    for(int i=65; i<=(2*n-2*(j-n)-1)+64 and j>n and i>0 ; i++ ){
        cout<<(char)i;
       }

    cout<<endl;
}
    
}