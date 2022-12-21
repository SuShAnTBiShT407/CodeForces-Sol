#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int key;
    TreeNode *left;
    TreeNode *right;
};
TreeNode *CreateNode(int val){
    TreeNode *new_node = new TreeNode();
    new_node->key = val;
    new_node->left = new_node->right = NULL;
    return new_node;
}

TreeNode *InsertNode(TreeNode *root, int val)
{    // Binary Search Tree Insert

    if (root == NULL)
    {
        root = CreateNode(val);
        return root;
    }
    if (val < root->key)
    {
        cout << "Root  " << root->key << " is greater so val goes to left \n";
        root->left = InsertNode(root->left, val);
        return root;
    }
    else if (val > root->key)
    {
        cout << "Root  " << root->key << " is smaller so val goes to right \n";
        root->right = InsertNode(root->right, val);
        return root;
    }
    return root;
}
TreeNode* root3;
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
   
    if(root1==NULL && root2!=NULL){
       root1->key = root2->key; 
    }
    else if(root1!=NULL && root2==NULL){
        root1->key = root1->key;
    }
     
    mergeTrees(root1->left, root2->left); 
    mergeTrees(root1->right, root2->right); 
    root1->key = root1->key +root2->key;   

    return root1;
}
int main(){

}