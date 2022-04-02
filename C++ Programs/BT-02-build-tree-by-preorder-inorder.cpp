#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right =NULL;
    }
};

int search(int inorder[], int start,int end , int curr){
    for( int i= start ; i<=end;i++){
        if( inorder[i] == curr){
            return  i;
        }
    }
    return -1;
}

node* builtTree( int preorder[] , int inorder[], int start, int end ){
    static int idx = 0;
    if( start > end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
     node* root = new node(curr);

    if ( start == end){
        return root;
    }
    int pos = search(inorder, start,end, curr);
    root->left = builtTree(preorder, inorder, start, pos -1);
    root->right = builtTree(preorder, inorder, pos+1, end);

    return root;
}

void inorderPrint(struct node* root){
    if( root == NULL){
        return ;
    }

    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
    return ;
}

int main(){

    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    struct node* root = builtTree(preorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}