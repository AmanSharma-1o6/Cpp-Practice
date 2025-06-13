#include <bits/stdc++.h>
using namespace std;
int main(){
    // Size of , comma , dot , arrow , casting , address , pointer 
    char a;
    cout<<sizeof(a);

    int y=(1 , 2 , 3 , 4);
    cout<<y;

    float b=3.4423; //casting
    cout<<(int)b;

    cout<< &a;
// int p,A;
//     p=(*A);

int c;
cin>>c;
c>=5 ? cout<<"greater than or equals to  5" : cout<<"Less than 5"; //conditional
cout<<endl;
//floor and ceil

cout<<floor(3.44)<<endl;
cout<<ceil(3.44);
    return 0;
}