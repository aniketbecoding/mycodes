#include<iostream>
using namespace std;
void disp(){
    cout<<"****************************"<<endl;
    cout<<"********** Items ***********"<<endl;
    cout<<"1.Milk"<<endl;
    cout<<"2.Bread"<<endl;
    cout<<"3.Cold-Drinks"<<endl;
    cout<<"4.Cornflakes"<<endl;
    cout<<"5.Butter"<<endl;
    cout<<"6.Cheese"<<endl;
    cout<<"7.Mayonnaise"<<endl;
    cout<<"8.Chocolate"<<endl;
    cout<<"9.Ketch-up"<<endl;
    cout<<"10.Wafers"<<endl;
    cout<<"11.Checkout"<<endl;
    cout<<"****************************"<<endl;
    }
int main(){
    disp();
    int option;
    int total=0;
    do{
    cout<<"Choose an item or press 11 to checkout: ";
    cin>>option;
    switch(option){
        case 1: cout<<"How many packets of milk you want?: ";
        int i;
        cin>>i;
        total+=15*i;
       // cout<<"your bill is: "<<total<<endl;
        break;
        case 2:cout<<"How many packets of bread you want?: ";
        int j;
        cin>>j;
        total+=20*j;
       // cout<<"your bill is: "<<total<<endl;
        break;
        case 3:cout<<"How many bottles (1L each) of coldrinks you want?: ";
        int k;
        cin>>k;
        total+=35*k;
      //  cout<<"your bill is: "<<total<<endl;
        break;
        case 4:cout<<"How many packets of cornflakes you want?: ";
        int l;
        cin>>l;
        total+=50*l;
       // cout<<"your bill is: "<<total<<endl;
        break;
        case 5:cout<<"How many packets of butter you want?: ";
        int m;
        cin>>m;
        total+=30*m;
      //  cout<<"your bill is: "<<total<<endl;
        break;
        case 6:cout<<"How many packets of cheese you want?: ";
        int n;
        cin>>n;
        total+=20*n;
       // cout<<"your bill is: "<<total<<endl;
        break;
        case 7:cout<<"How many packets of mayonnaise you want?: ";
        int p;
        cin>>p;
        total+=25*p;
        //cout<<"your bill is: "<<total<<endl;
        break;
        case 8:cout<<"How many packets of chocolates you want?: ";
        int c;
        cin>>c;
        total+=10*c;
       // cout<<"your bill is: "<<total<<endl;
        break;
        case 9:cout<<"How many bottles (500 ml each) of cheese you want?: ";
        int r;
        cin>>r;
        total+=45*r;
       // cout<<"your bill is: "<<total<<endl;
        break;
        case 10:cout<<"How many packets of wafers you want?: ";
        int w;
        cin>>w;
        total+=10*w;
       // cout<<"your bill is: "<<total<<endl;
        break;
       // case 11:cout<<"Total bill is: "<<total<<endl;

       // break;
    }
    }
    while(option!=11);
    if(total==0){
      cout<<"Thank you! Do come again! :)"<<endl;
    }
    else{
    cout<<"your total bill is: "<<total<<endl;
    int amount,change;
    cout<<"Money you are paying: ";
    cin>>amount;
    if(amount>total){
      change=amount-total;
      cout<<"Please collect your change: "<<change<<endl;
      cout<<"Thank you for shopping :).Do Come again!"<<endl;
    }
    else if(amount<total){
      change=total-amount;
      cout<<"you need to pay "<<change<<" more!"<<endl;
    }
    else{
    cout<<"Thank you for shopping :). Do Come again!"<<endl;
     
    }
    }
    cout<<"Rate us on a scale of 10"<<endl;
    return 0;
}
