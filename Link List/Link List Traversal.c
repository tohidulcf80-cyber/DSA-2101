#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node *next;
}*head = NULL, *temp = NULL, *newNode = NULL;

int main(){
 for (int i = 0; i <= 5; i++){
  newNode = (struct Node* )malloc(sizeof(struct Node));
  newNode->value = i*10;
  newNode->next = NULL;

  if(head == NULL){
  head = newNode;
  temp = newNode;

  }
  else {
  temp->next = newNode;
  temp = newNode;
  
  }
 }
  temp = head;
  temp = temp->next;

  while (temp != NULL)
  {
    printf("%d ", temp->value);
    temp = temp->next;
  }
  return 0;
 }
 