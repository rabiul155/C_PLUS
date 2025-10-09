#include <iostream>
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

// 🔹 Inorder Traversal (Left → Root → Right)
void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// 🔹 Preorder Traversal (Root → Left → Right)
void preorder(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// 🔹 Postorder Traversal (Left → Right → Root)
void postorder(Node* root) {
    if (root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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



    cout << "Preorder traversal: ";
    preorder(root);
    cout << "\n";

    cout << "Inorder traversal: ";
    inorder(root);
    cout << "\n";

    cout << "Postorder traversal: ";
    postorder(root);
    cout << "\n";

    return 0;
}
