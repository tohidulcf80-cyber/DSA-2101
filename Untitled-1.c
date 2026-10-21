
#include <stdio.h>
#include <stdlib.h>

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

void addToLinkedList(struct Node *NN, int value) {
    struct Node *ptr;

    if (value % 2 != 0) {
        NN->next = head;
        head = NN;
    }
    else {
        if (head == NULL) {
            head = NN;
        }
        else {
            ptr = head;

            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->next = NN;
        }
    }
}

void traverse() {
    struct Node *ptr = head;

    while (ptr != NULL) {
        printf("%d -> ", ptr->Data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

int main() {
    struct Node *NN = NULL;
    int n = 10, value;

    printf("Enter the number of elements: ");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &value);

        NN = newNode(value);
        addToLinkedList(NN, value);
    }

    printf("Linked List: ");
    traverse();

    return 0;
}
