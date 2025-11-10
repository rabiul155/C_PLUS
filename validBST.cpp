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

bool isValidBST(Node* root , Node* min, Node* max){
  if(root == NULL){
    return true;
  }

  if(min != NULL && root->data <= min->data){
    return false;
  }
  if(max != NULL && root->data >= max->data){
    return false;
  }

  bool leftMin = isValidBST(root->left , min , root);
  bool rightMax = isValidBST(root->right , root , max);

  return leftMin && rightMax;

}

int main(){

    // Example Tree:
    //        5
    //      /   \
    //     3     7
    //    / \   /  \
    //   2   4  6   8

    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);

    cout << isValidBST(root , NULL, NULL);
    


  return 0;
}

          