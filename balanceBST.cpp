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


Node* arrayToBST(vector<int>arr, int start, int end){
  if(start > end){
    return NULL;
  }

  int mid = (start+end)/2;
  Node* node = new Node(arr[mid]);

  node->left = arrayToBST(arr, start, mid-1);
  node->right = arrayToBST(arr, mid+1, end);

  return node;
}
void preorder (Node* root){
  if(root == NULL ){
    return;
  }
  cout<< root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

int main(){

  // Example Tree:
  //        5
  //      /   \
  //     3     7
  //    / \   /  \
  //   2   4  6   8

  vector<int> arr = {2,3,4,5,6,7,8};

  Node* root = arrayToBST(arr, 0, arr.size()-1);
  preorder(root);

  return 0;
}

          