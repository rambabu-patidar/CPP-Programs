#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right ;

    node(int val){
        data  =val;
        left = NULL;
        right = NULL;
    }

};

bool balancedHeight(node* root, int *height){
    if(root== NULL){
        return true;
    }
    int rh = 0;int lh = 0;
    if( balancedHeight(root->left,&lh) == false){
        return false;
    }
    if( balancedHeight(root->right,&rh) == false){
        return false;
    }
    *height= max(lh, rh)+1;

    if( abs(rh-lh)<=1){
        return true;
    }
    else{
        return false;
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
    int height  =0;
    if(balancedHeight(root,&height)){
        cout<<"balanced height "<<endl;
    }
    else{
        cout<<"unbalanced tree"<<endl;
    }


    
    return 0;
}