#include<stdio.h>
#include<stdlib.h>
struct Node{
  int Data;
  struct Node *next;
} *head = NULL;

  struct  Node *newNode (int value){

 struct Node *NN =NULL; 
 
  NN = (struct Node*)malloc(sizeof(struct Node*)); 
   NN->Data = value;
   NN->next = NULL;
   return NN;


 }
 void addToLinkedList(struct  Node *NN,int i)
 {
if (i%2==0){ 

 NN->next = head;
 head = NN;

}
 else{

  struct Node *ptr;
  ptr = head;
  while (ptr->next !=NULL){
   ptr = ptr->next;
  ptr->next = NN;
  }
 }
}

int main(){
 head = NULL;
 struct Node *NN = NULL;
 for( int i = 0; i<= 10; i++){

  NN = newNode(10*i);
  addToLinkedList(NN , i);
  printf("\n");
 }
return 0;
}
 

  


   

  
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node* next;
};

int main()
{
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;

    for (int i = 1; i <= 5; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        newNode->value = i * 10;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp = head;

    while (temp != NULL)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }

    return 0;
}
