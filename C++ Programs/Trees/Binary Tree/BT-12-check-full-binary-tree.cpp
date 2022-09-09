#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }

};

bool checkForFull(node* root){
    if(root== NULL){
        return true;
    }
    
    if((root->left== NULL) and (root->right== NULL) ){
        return true;
    }
    
    if( root->left and root->right){
        return checkForFull(root->left) and checkForFull(root->right);
    }
    
    return false;
}
void preOrderPrint(node* root){
    stack<node*> st;
    st.push(root);

    while(!st.empty()){
        node* newNode= st.top();
        st.pop();
        cout<<newNode->data<<" ";
        if(newNode->right != NULL){
            st.push(newNode->right);
        }
        if( newNode->left != NULL){
            st.push(newNode->left);
        }
    }
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    preOrderPrint(root);
    if(checkForFull(root)){
        cout<<"tree is full"<<endl;
    }
    else{
        cout<<"tree is not full"<<endl;
    }
    
    
    return 0;
}