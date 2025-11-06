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

int findDistance(Node* root , int val, int dist){
  if(root == NULL){
    return -1;
  }

  if(root->data == val){
    return dist;
  }

  int ldis = findDistance(root->left, val, dist);
  int rdis = findDistance(root->right, val, dist);

  if(ldis>=0) return ++ldis;
  if(rdis>=0) return ++rdis;

  return -1;


}

int disBtwNodes (Node* root , int p, int q){
  Node* LCA = findLCA(root , p, q);

  int d1 = findDistance(LCA, p,0);
  int d2 = findDistance(LCA, q,0);

  cout << d1 << "...." << d2 << endl;

  return d1+d2;
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


  
  cout << "Distance between nodes : " << disBtwNodes(root, 4,7) << endl;
  
  return 0;
}