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

// Count node and sum node

int countNode(Node* root){
  if(root == nullptr){
    return 0;
  }
  return countNode(root->left) + countNode(root->right) + 1; // root;
}

int sumNode(Node* root){
  if(root == nullptr){
    return 0;
  }
  return sumNode(root->left) + sumNode(root->right) + root->data; // root;
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

    cout << countNode(root) << endl;
    cout << sumNode(root) << endl;

    return 0;
}
