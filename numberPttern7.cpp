#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of Rows"<<endl;
    cin>>n;
    for(int i=1; i<=n ; i++){
    for(int j=1 ; j<=(2*n-1) ; j++ ){
       if( i==n || j==(n-i+1) || j==(n+i-1) ){
        cout<<i;
       }
       else{
        cout<<" ";
       }
    }
    cout<<endl;
}
    
}
