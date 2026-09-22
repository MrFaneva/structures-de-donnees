#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int size;
} MaxHeap;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert(MaxHeap *h, int val) {
    if (h->size >= MAX_SIZE) return;
    
    h->data[h->size] = val;
    int current = h->size;
    h->size++;
    
    while (current > 0) {
        int parent = (current - 1) / 2;
        if (h->data[current] > h->data[parent]) {
            swap(&h->data[current], &h->data[parent]);
            current = parent;
        } else {
            break;
        }
    }
}

int getMax(MaxHeap *h) {
    return (h->size > 0) ? h->data[0] : -1;
}

int main() {
    MaxHeap h;
    h.size = 0;
    
    insert(&h, 10);
    insert(&h, 30);
    insert(&h, 20);
    insert(&h, 50);
    
    assert(getMax(&h) == 50);
    printf("Test C Max-Heap réussi !\n");
    return 0;
}

