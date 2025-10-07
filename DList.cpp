#include<bits/stdc++.h>

using namespace std;

class node {
public:
  int data;
  node* prev;
  node* next;

  node(int val) {
    data = val;
    prev = NULL;
    next = NULL;
  }

};

void insertAtHead (node* &head, int val){
  node* n = new node(val);
  n->next = head;
  if(head){
    head->prev = n;
  }
  head = n;
}

void insertAtTail(node* &head, int val) {
  node* n = new node(val);

  if(head == NULL){
    head = n;
    return;
  }

  node* temp = head;

  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = n;
  n->prev = temp;
}

void display(node* head){
  node* temp = head;

  while(temp != NULL){
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void deleteHead(node* &head){
  node* temp = head;

  head = head->next;
  head->prev = NULL;
  
  delete temp;
}

void deleteNode(node* &head , int val){
  node* temp = head;


  while(temp != NULL && temp->data != val){
    temp= temp->next;
  }

  if(temp == head){
    deleteHead(head);
    return;
  }

  
  temp->prev->next = temp->next;
  if(temp->next){
    temp->next->prev = temp->prev;
  }

  delete temp;

}

int main() {
  node* head = NULL;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtTail(head,4);
  insertAtTail(head,5);
  insertAtHead(head, 0);

  display(head);
 
  deleteNode(head, 3);
  display(head);
  deleteHead(head);
  
  display(head);


  return 0;
}