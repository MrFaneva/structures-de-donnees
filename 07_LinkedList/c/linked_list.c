#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void append(Node** head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

int getAt(Node* head, int index) {
    Node* current = head;
    int count = 0;
    while (current != NULL) {
        if (count == index) return current->data;
        count++;
        current = current->next;
    }
    return -1; 
}

void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;
    append(&head, 10);
    append(&head, 20);

    assert(getAt(head, 0) == 10);
    assert(getAt(head, 1) == 20);

    printf("Test C Linked List réussi !\n");
    freeList(head);
    return 0;
}

