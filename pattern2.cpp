#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of Rows"<<endl;
    cin>>n;
    cout<<"No. of Columns"<<endl;
    cin>>m;
    for(int j=1; j<=n ; j++){
    for(int i=1 ; i<=m ; i++ ){
       if( i==1 || i==m || j==1 || j==n ){
        cout<<"X";
       }
       else{
        cout<<" ";
       }
    }
    cout<<endl;
}
    
}
