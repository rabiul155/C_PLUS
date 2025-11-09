#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


// Insert value in BST (value inserted in leaf node);
Node* insertBST(Node* root , int val){
  if(root == NULL){
    return new Node(val);
  }
  if(val < root->data){
    root->left = insertBST(root->left, val);
  }else{
    root->right = insertBST(root->right, val);
  }

  return root;
}

Node *searchInBST (Node* root , int val){
  if(root==NULL){
    return NULL;
  }

  if(root->data == val){
    return root;
  }

  if( val < root->data ){
    return searchInBST(root->left , val);
  }
   return searchInBST(root->right , val);
}

Node* inorderSuccess(Node* root){
  Node* curr = root;
  while(curr && curr->left != NULL){
    curr = curr->left;
  }
  return curr;
}

Node* deleteNodeBST (Node* root , int val){

  if(val < root->data){
    root->left =  deleteNodeBST(root->left , val);
  }else if(val > root->data){
    root->right = deleteNodeBST(root->right , val);
  }else{
    if(root->left == NULL){
      Node* temp = root->right;
      delete root;
      return temp;
    }else if(root->right == NULL){
      Node* temp = root->left;
      delete root;
      return temp;
    }else{

      Node* temp = inorderSuccess(root->right);
      root->data = temp->data;
      root->right = deleteNodeBST(root->right, temp->data);

    }

    return root;

  }
}

void inorder (Node* root){
  if(root == NULL){
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}


int main(){
  // Example Tree:
  //        5
  //      /   \
  //     1     7
  //      \  
  //       3
  //      / \
  //     2   4

  // sample array {5,1,3,4,2,7}

  Node* root = NULL;
  root = insertBST(root, 5);
  insertBST(root, 1);
  insertBST(root, 3);
  insertBST(root, 4);
  insertBST(root, 2);
  insertBST(root, 7);

  inorder(root);
  cout << endl;

  //  Node* node = searchInBST(root, 4);
  //  cout<< node->data;

  deleteNodeBST(root,7);
  inorder(root);

  return 0;
}

