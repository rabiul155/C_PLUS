#include<bits/stdc++.h>

using namespace std;

class node {
  public : 
  int data;
  node* next;

  node(int val){

    data = val;
    next = NULL;

  }

};

void insertAtTail (node* &head , int val){
  node* n = new node(val); // here n is the address of new node. node created in heap and its address stored in stack.

  if(head == NULL){
    head = n;
    return;
  }
  node* temp = head;

  while (temp->next != NULL){
    temp = temp->next;   
    // here temp is address. we know if we want to get value from address we need dereference so basically it is *temp is the object created in heap after that we access val or next like this (*temp).val or (*temp).next....sorthand (*temp).next == temp->next.....(*temp).val == temp->val
  }
  temp->next = n;
}

void display(node* head){
  node* temp = head;

  while (temp!= NULL){
      cout << temp->data << " ";
      temp = temp->next;
  }

  cout << endl;
  
  
}

int main (){

  node* head = NULL;

  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  display(head);


  return 0;
}