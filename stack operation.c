#include <stdio.h>

#define MAX_SIZE 10
int stack[MAX_SIZE];
int top = -1;

int isEmpty() {
    return (top == -1);
}

int isFull() {
    return (top == MAX_SIZE - 1);
}

void push(int data) {
    if (isFull()) {
        printf("STACK OVERFLOW....STACK IS FULL\n");
    } else {
        top++;
        stack[top] = data;
        printf("Pushed %d to the stack\n", data);
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow...could not retrieve....STACK IS EMPTY\n");
        return -1;
    } else {
        int data = stack[top];
        top--;
        return data;
    }
}

int peek() {
    if (isEmpty()) {
        return -1;
    } else {
        return stack[top];
    }
}

int main() {
        push(10);
        push(80);
        push(20);
        push(70);
        push(50);
 

    printf("Elements in top of the stack is %d\n", peek());

    printf("Elements in stack popping: ");
    while (!isEmpty()) {
        printf("%d ", pop());
    }
    printf("\n");

    printf("Stack Full %s\n", isFull() ? "true" : "false");
    printf("Stack Empty %s\n", isEmpty() ? "true" : "false");
    return 0;
}
