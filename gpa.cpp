#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ia[n];
    int cred[n];
    double cgpa;
    cin>>cgpa;
    for(int i=0;i<n;i++){
        cin>>ia[i];
    }
    for(int i=0;i<n;i++){
        cin>>cred[i];
    }
    double totc=0;
    for(int i=0;i<n;i++){
        totc+=cred[i];
    }
    double m=0;
    for(int i=0;i<n;i++){
        double marks=1.5*ia[i]+2.5*cgpa;

        if(marks>89){
        cout<<" grade=A+"<<endl;
        m+=10*cred[i];
    }
    else if(marks>79 && marks<89){
        cout<<" grade=A"<<endl;
        m+=9*cred[i];
    }
    else if(marks>69 && marks<80){
        cout<<" grade=B"<<endl;
        m+=8*cred[i];

    }
    else if(marks>59 && marks<70){
        cout<<" grade=C"<<endl;
        m+=7*cred[i];
    }
    else if(marks>49 && marks<60){
        cout<<" grade=D"<<endl;
        m+=6*cred[i];
    }
    else if(marks>39 && marks<50){
        cout<<" grade=E"<<endl;
        m+=5*cred[i];
    }
    else{
        cout<<" grade=F"<<endl;
        m+=4*cred[i];
    }
     
    
    }
    double fgp=m/totc;
    cout<<"your gpa is: "<<fgp<<endl;

    
    return 0;
}
    