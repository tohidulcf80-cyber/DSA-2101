#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data ;
  struct Node *next;

}; 
void linkedListTraversal(struct Node *ptr ){
 while (ptr != NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
 }
}

struct Node * insertAtFirst(struct Node* head , int data){
  struct Node *ptr= (struct Node *)malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = data;
  return ptr;    
}
struct Node * insertAtIndex(struct Node* head , int data,int index){
  struct Node *ptr= (struct Node *)malloc(sizeof(struct Node));
  struct  Node *p = head;
     int i= 0;
  while(i!= index-1){
   p= p->next;
   i++;
}
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
return head;
}
struct Node * insertAtLast(struct Node* head , int data){
    struct Node *ptr= (struct Node *)malloc(sizeof(struct Node));
    struct  Node *p = head;
  while(p->next !=NULL){
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  ptr->data = data;
  return head;

}
struct Node * insertAtAfterNode(struct Node* head, struct Node* pvnq,int index, int data ){
  struct Node *ptr= (struct Node *)malloc(sizeof(struct Node));
  int i =0;

  while(i!=index+1){
    pvnq = pvnq->next;
    i++;
    }
  ptr->next =pvnq->next;
  pvnq->next =ptr;
  ptr->data = data;
   
}
int main(){
struct Node *head;
struct Node *second;
struct Node *third;

head = (struct Node *)malloc(sizeof(struct Node*));
second =(struct Node *)malloc(sizeof(struct Node*));
third = (struct Node *)malloc(sizeof(struct Node*));
head->data = 7;
head->next =second;

 second ->data =11;
 second->next = third;

third->data =41;
third->next =NULL;
printf("Linked List before insertion\n");
linkedListTraversal(head);

printf("Linked List after insertion\n");
head =insertAtFirst(head, 2);
linkedListTraversal(head);
printf("Linked List after insertion at index\n");
insertAtIndex(head, 23,3);
linkedListTraversal(head);
printf("Linked List after insertion at last\n");
insertAtLast(head, 55);
linkedListTraversal(head);
printf("Linked List after insertion at after node\n");
insertAtAfterNode(head, second, 1, 99);
linkedListTraversal(head);
    return 0; 

}
