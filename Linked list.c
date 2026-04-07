#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void printlist(void) {
    struct node *ptr = head;
    printf("head -> ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void insert(int data) {
    struct node *link = (struct node*)malloc(sizeof(struct node));
    link->data = data;
    link->next = head;
    head = link;
}

void reverselist() {
    struct node *prev = NULL;
    struct node *cur = head;
    struct node *next = NULL;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}

int main(void) {
    insert(10);
    insert(104);
    insert(107);
    insert(110);
    insert(90);
    insert(20);
    insert(50);
    insert(30);
    insert(70);

    printlist();
    reverselist();
    printlist();

    return 0;
}
