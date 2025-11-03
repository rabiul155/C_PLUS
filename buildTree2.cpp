#include<bits/stdc++.h>
using namespace std;

class Node {
  public : 
    int data;
    Node* left;
    Node* right;

    Node (int val){
      data = val;
      left  = nullptr;
      right = nullptr;
    }
};

// 🔹 Inorder Traversal (Left → Root → Right)
void inorderPrint(Node* root) {
    if (root == nullptr) return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int search (int inorder[], int start, int end, int curr){
  for(int i = start; i<= end; i++){
    if(inorder[i] == curr){
      return i;
    }
  }
  return -1;
}


Node* buildTree (int postorder[], int inorder[], int start, int end){
  static int idx = 4;

  if(end < start){
    return nullptr;
  }

  int curr = postorder[idx];
  idx--;
  Node* node = new Node(curr);

  if(start == end){
    return node;
  }

  int pos = search(inorder , start, end, curr);

  node->right = buildTree(postorder, inorder, pos+1, end);
  node->left = buildTree(postorder , inorder , start, pos-1);

  return node;

}

                                                                           

// Build tree form postorder and inorder traversal array

int main(){      
  
  int postorder[] = {4,2,5,3,1};
  int inorder[] = {4,2,1,5,3};

  Node* head = buildTree(postorder, inorder, 0, 4);

  inorderPrint(head);

  

  return 0;
}