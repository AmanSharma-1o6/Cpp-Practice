#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give value of n :"<<endl;
    cin>>n;
    for(int j=1; j<=n ; j++){
    for(int i=1 ; i<=(n-j)  ; i++ ){
        cout<<" ";
       }
    for(int i=1 ; i<=(2*j-1) ; i++ ){
        cout<<"X";
       }

    cout<<endl;
}
    
}