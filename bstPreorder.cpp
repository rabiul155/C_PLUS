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

Node* buildBST (int preorder[], int &index, int min, int max, int n){
  if(index >= n){
    return NULL;
  }
  int key = preorder[index];
  Node* root = NULL;
  if(key > min && key < max){
    // Here preorder[index] means the value 
    root = new Node(key);
    index++;
    if(index < n){
      // Here 2 call but 1 call is run because condition must fails for one call
      // preorder[index] means call with next value;
      root->left = buildBST(preorder, index,  min, key, n);
      root->right = buildBST(preorder, index,  key, max, n);
    }

  }

  return root;

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

  // sample array {5,1,3,2,4,7}

  int preorder[6] = {5,1,3,2,4,7};
  int index  = 0;
  int min = INT_MIN;
  int max = INT_MAX;
  int n = 6;

  Node* node = buildBST(preorder, index, min, max, n);
  inorder(node);

  return 0;
}

          