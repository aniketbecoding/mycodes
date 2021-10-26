#include<iostream>
using namespace std;
int lcslen(string s1,string s2){
    int n=s1.length();
    int m=s2.length();
    int lc[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++ ){
            if(i==0 || j==0){
                lc[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                lc[i][j]=lc[i-1][j-1]+1;   //one will be added to diagonal element of lc mactrix
            }
            else{
                lc[i][j]=max(lc[i-1][j],lc[i][j-1]);     //maximum of left and top element will be entered in current matrix
            }
        }
    }
    return lc[n][m];     //after traversing through the strings and putting values inside the matrix the length of largest lcs is at last box of the matrix;

}
int main(){
    string s1="MZJAWXU";
    string s2="MAZJAWXU";
    cout<<lcslen(s1,s2)<<endl;
    return 0;
}