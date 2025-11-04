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
       
// Count node of tree
int countNode(Node* root){
  if(root == nullptr){
    return 0;
  }
  return countNode(root->left) + countNode(root->right) + 1; // root;
}

// Sum of all nodes
int sumNode(Node* root){
  if(root == nullptr){
    return 0;
  }
  return sumNode(root->left) + sumNode(root->right) + root->data; // root;
}

// Height of the tree
int heightTree (Node* root){
  if(root == NULL){
    return 0;
  }
  return max(heightTree(root->left), heightTree(root->right)) + 1;
}

// calculate diameter of the tree . Visual representation "/\"
int calculateDiameter(Node* root){
  if(root == NULL){
    return 0;
  }

  int lHeight = heightTree(root->left);
  int rHeight = heightTree(root->right);
  int diameter = lHeight+rHeight+1;

  int lDiameter = calculateDiameter(root->left);
  int rDiameter = calculateDiameter(root->right);

  return max(diameter, max(lDiameter, rDiameter));
}

// Calculate diameter optimize version. Visual representation "/\"
int calculateDiameter2(Node* root, int* height) {
  if (root == NULL) {
      *height = 0;
      return 0;
  }

  int leftHeight = 0, rightHeight = 0;

  int leftDiameter = calculateDiameter2(root->left, &leftHeight);
  int rightDiameter = calculateDiameter2(root->right, &rightHeight);

  *height = max(leftHeight, rightHeight) + 1;

  int currentDiameter = leftHeight + rightHeight + 1;

  return max({currentDiameter, leftDiameter, rightDiameter});
}

// Sum replacement of binary tree 
int sumReplacement(Node* root){

  if(root == NULL){
    return 0;
  }

  int lSum = sumReplacement(root->left);
  int rSum = sumReplacement(root->right);

  root->data = lSum+rSum+root->data;

  return root->data;
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

    cout << "Count Node : " << countNode(root) << endl;
    cout << "Sum node : " << sumNode(root) << endl;
    cout << "Height : " << heightTree(root) << endl;
    cout << "Diameter : " << calculateDiameter(root) << endl;

    int height = 0;
    cout << "Diameter2 : " << calculateDiameter2(root, &height) << endl;

    cout << "Sum Replacement : " << sumReplacement(root) << endl;
    printTree(root);


    return 0;
}
