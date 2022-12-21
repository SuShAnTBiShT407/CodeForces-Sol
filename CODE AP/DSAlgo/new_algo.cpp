#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * nex;
    Node *pre;
};

Node * CreateNode(int val){
    Node *new_node;
    new_node->data = val;
    new_node->nex = NULL;
    new_node->pre = NULL;
    return new_node;
}

Node *insert(Node *root, int val){
    
    if(root==NULL){
        root = CreateNode(val);
        return root;
    }

    else  if(val < root->data){
       root->pre =  insert(root->pre, val);
       return root;
    }
    else if(val > root->data){
        root->nex = insert(root->nex, val);
        return root;
    }

    return root;


}

void printNodes(Node *root){
    if(root!=NULL){
        printNodes(root->pre);
        printNodes(root->nex);
        cout<<root->data<<" ";
    }
}

int main(){
    int rootvalue;
    cout<<"Enter the root value : ";
    cin>>rootvalue;
    Node *root = CreateNode(rootvalue);
    insert(root, 3);
    insert(root, 10);
    insert(root, 1);
    insert(root, 15);
    printNodes(root);

    return 0 ;

}