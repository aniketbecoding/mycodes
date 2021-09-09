#include<iostream>
#include<fstream>
using namespace std;
bool login(){
    string username,password,un,pw;
    cout<<"Enter username: ";
    cin>>username;
    cout<<endl;
    cout<<"Enter password: ";
    cin>>password;
    ifstream info("data\\"+username+".txt");      //to read from file named info
    getline(info,un);                             //storing the username of info into un(username)
    getline(info,pw);                           //storing password stored in info in pw
    if(un==username && pw==password){
       return true;
    }
    else{
       return false;
    }
}
void choices(){
    cout<<"1.Register"<<endl;
    cout<<"2.Log in"<<endl;
}
int main(){
    int op;
    choices();
    cout<<"Enter your choice: ";
    cin>>op;
    if(op==1){
        string username,password;
        cout<<"Enter your desired username: ";
        cin>>username;
        cout<<"Enter password: ";
        cin>>password;
        ofstream file;                         //a file is created of data-type ofstream as we have to write some data into it
        file.open("data\\"+username+".txt");      //opened the file and gave it name username
        file<<username<<endl<<password;         //then we wrote the username and password given by the user into the file
        file.close();                      //closed the file
        main();                             //and called the main function again
    }
    else if(op==2){
        if(login()){
            cout<<"successfully logged in!"<<endl;
        }
        else{
            cout<<"Invalid username or password!"<<endl;
            main();
            
            
        }
    }
    
}