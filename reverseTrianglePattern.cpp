#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of Rows and Columns"<<endl;
    cin>>n;
    for(int j=1; j<=n ; j++){
    for(int i=1 ; i<=n-j+1 ; i++ ){
        cout<<"X";
       }
    cout<<endl;
}
}
