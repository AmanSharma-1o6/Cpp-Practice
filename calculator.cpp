#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    char op;
    cout<<"Choose the operator (+,-,*,/,%) : ";
    cin>>op;
    switch (op){
        case '+':
        cout<<"Sum is : "<<a+b;
        break;
        case '-':
        cout<<"Difference is : "<<a-b;
        break;
        case '*':
        cout<<"Product is : "<<a*b;
        break;
        case '/':
        cout<<"Division is : "<<a/b;
        break;
        case '%':
        cout<<"Remainder is : "<<a%b;
        break;
        default :
        cout<<"Enter valid oprator"; 
    }
    return 0;
}