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

// Level order traversal on tree

void levelOrderTraverse(Node* root){
  if(root == nullptr){
    return;
  }

  queue<Node*> q;
  q.push(root);
  q.push(nullptr);

  while(!q.empty()){
    Node* node = q.front();
    q.pop();

    if(node != nullptr){
      cout << node->data << " ";
      if(node->left){
        q.push(node->left);
      }
      if(node->right){
        q.push(node->right);
      }
    }else{
      if(!q.empty()){
        q.push(nullptr);
      }
    }
  }

  cout << endl;
}

int sumAtKLevel (Node* root, int k){

  if(root == nullptr){
    return 0;
  }
  int sum = 0;
  int level = 0;
  queue<Node*> q;
  q.push(root);
  q.push(nullptr);

  while(!q.empty()){
    Node* node = q.front();
    q.pop();

    if(node != nullptr){
      if(level == k){
        sum+= node->data;
      }
      if(node->left) q.push(node->left);
      if(node->right) q.push(node->right);
    }else{
      if(!q.empty()){
        level++;
        q.push(nullptr);
      }
    }
  }


  return sum;
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

    levelOrderTraverse(root);
    cout << sumAtKLevel(root, 2);


    return 0;
}
