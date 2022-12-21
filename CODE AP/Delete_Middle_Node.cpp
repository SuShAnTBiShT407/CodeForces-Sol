#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
};

Node *create_Node(int key){
    Node *node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node *insert(Node *root, int val){
    if(root==NULL){
        root = create_Node(val);
        return root;
    }
    if (val< root->key){
        cout<<"Root  "<<root->key<<" is greater so val goes to left \n";
        root->left = insert(root->left, val);
        return root;
    }
    else if (val > root->key){
        cout<<"Root  "<<root->key<<" is smaller so val goes to right \n";
        root->right = insert(root->right, val);
        return root;
    }
    return root;
}
Node *minValueofTREE(Node *root){
    Node *current = root;
    while(current && current->left!=NULL){
        current = current->left;
    }
    return current;

}

Node *DeleteNode(Node *root, int val){
    if(root==NULL){
        return root;
    }
    if(val < root->key){
        root->left = DeleteNode(root->left, val);
    }
    else if(val > root->key){
        root->right = DeleteNode(root->right, val);
    }

    else{
        if(root->left == NULL){
            Node *temp  = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = minValueofTREE(root->left);
        root->key = temp->key;
        root->left = DeleteNode(root->right, temp->key);
    }

    return root;
}
void inorder(Node *root){ 
    if (root != NULL){
        inorder(root->left); 
        cout<<root->key<<"  "; 
        inorder(root->right);
    } 
} 

int main(){
    int n, val, del;
    int root_node;
    cout<<"Enter how many element you wantr to store : ";
    cin>>n;
    cout<<"Enter the root node : ";
    cin>>root_node;
    Node *root = create_Node(root_node);
    n--;
    while(n!=0){ 
        cout<<"---> ";
        cin>>val;
        insert(root, val);
        n--;
    }
    //cout<<root->key<<" "<<root->left->key<<" "<<root->right->key;
    cout<<endl;
    cout<<"---------------------------------------------------------------\n";
    inorder(root);
    cout<<"---------------------------------------------------------------\n";
    cout<<"Enter the value you want to delete : \n";
    cin>>del;
    root = DeleteNode(root, del);
    //cout<<root->key<<" "<<root->left->key<<" "<<root->right->key;
    cout<<"\n---------------------------------------------------------------\n";
    inorder(root);
    cout<<"---------------------------------------------------------------\n";
}