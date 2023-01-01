#include <iostream>
using namespace std;

class node{
    public:

        int data;
        node* left;
        node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if (data==-1){
        return NULL;
    }

    cout<<"Enter the data for inserting in the left of "<<data<<endl;
    root->left=buildtree(root->left);

    cout<<"Enter the data for inserting in the right of "<<data<<endl;
    root->right=buildtree(root->right);

    return root;
}

void inorder(node* root){
    if (root==NULL) return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void preorder(node* root){
    if (root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if (root==NULL) return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root=NULL;

    root=buildtree(root);
    // 5 4 6 -1 -1 1 -1 -1 2 1 -1 -1 2 -1 -1

    cout<<"Inorder traversal is : "<<endl;
    inorder(root);
    cout<<"Preorder traversal is : "<<endl;
    preorder(root);
    cout<<"Postorder traversal is : "<<endl;
    postorder(root);

    return 0;
}


/*
Enter the data : 
5 4 6 -1 -1 1 -1 -1 2 1 -1 -1 2 -1 -1
Enter the data for inserting in the left of 5
Enter the data : 
Enter the data for inserting in the left of 4
Enter the data : 
Enter the data for inserting in the left of 6
Enter the data :
Enter the data for inserting in the right of 6  
Enter the data :
Enter the data for inserting in the right of 4  
Enter the data :
Enter the data for inserting in the left of 1   
Enter the data :
Enter the data for inserting in the right of 1  
Enter the data :
Enter the data for inserting in the right of 5  
Enter the data :
Enter the data for inserting in the left of 2   
Enter the data :
Enter the data for inserting in the left of 1   
Enter the data :
Enter the data for inserting in the right of 1  
Enter the data :
Enter the data for inserting in the right of 2  
Enter the data :
Enter the data for inserting in the left of 2   
Enter the data :
Enter the data for inserting in the right of 2  
Enter the data :
Inorder traversal is :
6 4 1 5 1 2 2 Preorder traversal is :
5 4 6 1 2 1 2 Postorder traversal is :
6 1 4 1 2 2 5
*/
