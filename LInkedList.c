#include <stdio.h>
#include <stdlib.h>

//create a node
struct node 
{
  int item;
  struct Node* next;
};

void insertAtBeginning(struct Node** ref, int data){
//Allocate memory to a node
  struct Node* new_node = (struct Node*)  malloc(sizeof(struct Node));
  
//insert the item
  new_node->item = data;
  new_node->next = (*ref);
  
//move head to new node
  (*ref) = new_node;
}

//insert a node after a node
void insertAfter(struct Node* node, int data){
if (node == NULL){
  printf("the given previous node cannot be NULL");
  return;
}
  
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = data;
  new_node->next = node->next;
  node->next = new_node;
}
