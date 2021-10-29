#include<iostream>
using namespace std;
void toh(int n, char src,char dest,char helper){
    if(n==0){
        return;
    }
    toh(n-1,src,helper,dest);
    cout<<"MOVE FROM"<<src<<"TO"<<dest<<endl;
    toh(n-1,helper,dest,src);
}
int main(){
    cout<<"Solution is:"<<endl;
    toh(4,'A','C','B');
    return 0;
}
