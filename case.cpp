#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter two numbers:";
    cin>>n1>>n2;
    char op;
    cout<<"enter a character:"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        default:
        cout<<"enter another operator"<<endl;
        break;
    
    }
    return 0;
}