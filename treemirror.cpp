#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
bool ismir(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->data==root2->data){
        return ismir(root1->right,root2->left) && ismir(root1->left,root2->right);
    }
    return false;
}
int main(){
    Node* root1=new Node(2);
    Node* root2=new Node(2);
    root1->left=new Node(1);
    root1->right=new Node(3);
    root2->left=new Node(3);
    root2->right=new Node(1);
    if(ismir(root1,root2)){
        cout<<"mirror image!"<<endl;
    }
    else{
        cout<<"not a mirror image!"<<endl;

    }
    return 0;
}