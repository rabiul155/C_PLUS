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

Node* findLCA(Node* root , int p, int q){
  if(root == NULL){
    return NULL;
  }

  if(root->data == p || root->data == q){
    return root;
  }

  Node* leftLCA = findLCA(root->left , p, q);
  Node* rightLCA = findLCA(root->right, p, q);

  if(leftLCA && rightLCA){
    return root;
  }

  if(leftLCA) return leftLCA;
  if(rightLCA) return rightLCA;
  

  // No lca found 

  return NULL;
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


  Node* LCA = findLCA(root, 4, 7);
  cout << "LCA : " << LCA->data << endl;
  
  return 0;
}