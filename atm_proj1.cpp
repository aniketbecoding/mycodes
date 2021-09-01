#include<iostream>
using namespace std;
void showmenu(){
    cout<<"--------Menu--------"<<endl;
    cout<<"   1.Check Balance"<<endl;
    cout<<"   2.Money deposit"<<endl;
    cout<<"   3.Money withdrawal"<<endl;
    cout<<"   4.Exit"<<endl;
    cout<<"---------------------"<<endl;
}
int main(){
    showmenu();
    double balance=1000;
    int option;
    do{
    cout<<"choose an option: ";
    cin>>option;
    switch(option){
        case 1:
        cout<<"Your balance is: "<<balance<<endl;
        break;
        case 2:
        cout<<"Enter Amount to be deposited: ";
        int amount;
        cin>>amount;
        balance+=amount;
        cout<<"Deposited successfully!"<<endl;
        cout<<"your new balance is: "<<balance<<endl;
        break;
        case 3:
        cout<<"amount to withdraw: ";
        int Wamount;
        cin>>Wamount;
        if(Wamount<=balance){
        balance-=Wamount;
         cout<<"Please collect your money!"<<endl;
        cout<<"your new balance is: "<<balance<<endl;
        }
        else{
            cout<<"oops! Not enough amount!"<<endl;
        }
       // cout<<"Please collect your money!"<<endl;
        //cout<<"your new balance is: "<<balance<<endl;
        break;
    }



    }
    while(option!=4);
    return 0;

    

}