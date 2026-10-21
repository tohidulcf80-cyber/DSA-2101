
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int Data;
    struct Node *next;
} *head = NULL;

struct Node *newNode(int value) {
    struct Node *NN = NULL;

    NN = (struct Node*)malloc(sizeof(struct Node));

    NN->Data = value;
    NN->next = NULL;

    return NN;
}

void addToLinkedList(struct Node *NN, int i) {
    if (i % 2 == 0) {
        NN->next = head;
        head = NN;
    }
    else {
        if (head == NULL) {
            head = NN;
        }
        else {
            struct Node *ptr;
            ptr = head;

            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->next = NN;
        }
    }
}

int main() {
    head = NULL;
    struct Node *NN = NULL;

    for (int i = 0; i <= 10; i++) {
        NN = newNode(10 * i);
        addToLinkedList(NN, i);
    }

    struct Node *ptr = head;

    while (ptr != NULL) {
        printf("%d ", ptr->Data);
        ptr = ptr->next;
    }

    printf("NULL\n");

    return 0;
}
