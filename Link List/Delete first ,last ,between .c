#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr){
 while (ptr!=NULL){
  printf("Element: %d\n", ptr->data);
  ptr =ptr->next;
 }
 
}
struct Node *deleteFirst(struct Node *head){
 struct Node *ptr= head;
 head = head->next;
 free(ptr);
 return head;
}
struct Node *deleteAtIndex(struct Node *head, int index){
   
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i =0; i <index-1; i++){
     p= p->next;
     q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
 struct Node *deleteAtLast(struct Node *head){
 struct Node *p =head;
  struct Node *q =head->next;
while(q->next != NULL){
    p =p->next; q= q->next;
    }

  p->next = NULL;
  free(q);
 return head;
 }
 struct Node *deleteAtValue(struct Node *head, int value){
  struct Node *p =head;
  struct Node *q= head->next;

while(q->data !=value && q->next !=NULL ){
     p = p->next;
    q = q->next;
    }
 if(q->data == value){
    p->next=q->next;
    free(q);
   }
return head;
    }

int main(){

 struct Node *head;
 struct Node *second;
 struct Node *third;
  struct Node *fourth;
  
  head = malloc(sizeof(struct Node));
  second = malloc(sizeof(struct Node));
  third = malloc(sizeof(struct Node));
  fourth = malloc(sizeof(struct Node));

   head->data = 7;
   head->next = second;

   second->data = 11;
   second->next = third;
   third->data = 41;
   third->next = fourth;

    fourth->data = 50;
    fourth->next = NULL;

 int index, value;
   printf("Linked List before deletion\n");
   linkedListTraversal(head);

//Delete First
  printf("\nDelete First Node\n");
  printf("Before deletion:\n");
  linkedListTraversal(head);
head = deleteFirst(head);

  printf("After deletion:\n");
  linkedListTraversal(head);

// Delete at Index
   printf("\nEnter index to delete: ");
   scanf("%d", &index);

   printf("Before deletion:\n");
    linkedListTraversal(head);

 head = deleteAtIndex(head, index);

  printf("After deletion at index:\n");
  linkedListTraversal(head);


// Delete Last
  printf("\nDelete Last Node\n");
   printf("Before deletion:\n");
  linkedListTraversal(head);
    head = deleteAtLast(head);

 printf("After deletion at last:\n");
 linkedListTraversal(head);

// Delete by Value
  printf("\nEnter value to delete: ");
  scanf("%d", &value);

  printf("Before deletion:\n");
  linkedListTraversal(head);
 head= deleteAtValue(head, value);

  printf("After deletion by value:\n");
    linkedListTraversal(head);
return 0;
}
