#include <bits/stdc++.h>
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
       

// Height of the tree
int heightTree (Node* root){
  if(root == NULL){
    return 0;
  }
  return max(heightTree(root->left), heightTree(root->right)) + 1;
}


// Preorder traversal print
void printTree (Node* root){
  if(root == NULL){
    return;
  }

  cout << root->data << " ";
  printTree(root->left);
  printTree(root->right);
}

// Check the binary tree is balanced or not. Time complexity O(n2)
bool isBalanced(Node* root){
  if(root== NULL){
    return true;
  }

  if(!isBalanced(root->left)) return false;
  if(!isBalanced(root->right)) return false;

  int lh = heightTree(root->left);
  int rh = heightTree(root->right);


  if(abs(lh-rh)>1) return false;
}

// Check the binary tree is balanced or not. Time complexity O(n)
bool isBalanced2(Node* root, int* h){
  if(root== NULL){
    return true;
  }

  int lh = 0, rh = 0;

  if(!isBalanced2(root->left, &lh)) return false;
  if(!isBalanced2(root->right, &rh)) return false;

  *h = max(lh, rh)+1;

  if(abs(lh-rh)<1) return false;

  return true;

}



int main() {
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



    cout << "Balance : " << isBalanced(root) << endl;

    int h = 0;
    cout << "Balance2 : " << isBalanced2(root, &h) << endl;

    return 0;
}
          