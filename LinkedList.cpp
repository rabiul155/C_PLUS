#include<bits/stdc++.h>
using namespace std;
class node {
public:
  int data;
  node* next;
  node(int val) {
    data = val;
    next = NULL;
  }
};

void insetAtHead(node*& head, int val) {
  node* n = new node(val);
  n->next = head;
  head = n;
}

void insertAtTail(node*& head, int val) {
  node* n = new node(val); // here n is the address of new node. node created in heap and its address stored in stack.

  if (head == NULL) {
    head = n;
    return;
  }
  node* temp = head;

  while (temp->next != NULL) {
    temp = temp->next;
    // here temp is address. we know if we want to get value from address we need dereference so basically it is *temp is the object created in heap after that we access val or next like this (*temp).val or (*temp).next....sorthand (*temp).next == temp->next.....(*temp).val == temp->val
  }
  temp->next = n;
}

void display(node* head) {
  node* temp = head;

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

bool findValue(node* head, int val) {
  node* temp = head;

  while (temp != NULL) {
    if (temp->data == val) {
      return true;
    }
    temp = temp->next;
  }
  return false;
}

void deleteAtHead(node*& head) {
  node* deleteNode = head;
  head = head->next;
  delete deleteNode;
}

void deleteNode(node*& head, int val) {


  // if list is empty
  if (head == NULL) {
    return;
  }

  // if only one node
  if (head->next == NULL) {
    deleteAtHead(head);
  }


  node* temp = head;

  while (temp->next->data != val) {
    temp = temp->next;
  }
  node* todelete = temp->next;
  temp->next = temp->next->next;
  delete todelete;

}

node* reverseList(node* head) {

  node* prev = NULL;
  node* curr = head;
  node* next;


  while (curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  return prev;
}

node* reverseKNode(node* head, int k) {

  node* prev = NULL;
  node* curr = head;
  node* next;

  int count = 0;
  while (curr != NULL && count < k) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }

  if (next != NULL) {
    head->next = reverseKNode(next, k);
  }

  return prev;
}

int main() {
  node* head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  insertAtTail(head, 4);
  insertAtTail(head, 5);


  // display(head);
  // insetAtHead(head,0);
  // display(head);

  // bool find1 = findValue(head,3);
  // bool find2 = findValue(head,10);
  // cout << "Find " <<  find1 << " " << find2 << endl;

  // deleteNode(head, 3);
  // deleteAtHead(head);

  display(head);

  // cout << "Display after reverse\n";
  // node* newHead = reverseList(head);
  // display(newHead);

  node* newHead = reverseKNode(head, 3);
  display(newHead);

  return 0;
}