#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void flatten(Node* root){
  if(root == NULL || (root->left == NULL && root->right == NULL)){
    return;
  }


 
  flatten(root->left);

  Node* temp = root->right;
  root->right = root->left;
  root->left = NULL;

  Node* t = root;

  while(t->right != NULL){
    t = t->right;
  }

  t->right = temp;
  

  flatten(root->right);
}


int main(){
  // Example Tree:
  //        1
  //      /   \
  //     2     3
  //    / \   /  \
  //   4   5  6   7

  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  flatten(root);

  while(root != NULL){
    cout << root->data << " ";
    root = root->right;
  }

  return 0;
}