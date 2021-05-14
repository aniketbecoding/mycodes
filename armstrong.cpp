#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int lastdigit;
    int original=n;
    while(n>0){
        lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;



    }
    if(sum==original){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}