#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int item) {
    if (isFull(s)) exit(1);
    s->items[++(s->top)] = item;
}

int pop(Stack *s) {
    if (isEmpty(s)) exit(1);
    return s->items[(s->top)--];
}

int peek(Stack *s) {
    if (isEmpty(s)) exit(1);
    return s->items[s->top];
}

int main() {
    Stack s;
    initStack(&s);
    push(&s, 10);
    push(&s, 20);
    assert(peek(&s) == 20);
    assert(pop(&s) == 20);
    assert(peek(&s) == 10);
    printf("Test C Stack réussi !\n");
    return 0;
}

