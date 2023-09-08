#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x;
    struct Node* next;
} Node;

void add_next(Node* node, int xValue) {
    Node* next = malloc(sizeof(Node));
    // malloc may return null, if there is not enough memory left
    if(next == NULL) {
        exit(1);
    }

    next->x = xValue;
    next->next = NULL;
    
    node->next = next;
}

void append_node(Node* current, int xValue) {
    if(current == NULL) {
        return;
    }

    Node* selected = current;
    while (selected->next != NULL)
    {
        selected = selected->next;
    }
    
    add_next(selected, xValue);
}

void read_all_nodes(Node* root) {
    Node* curr = root;
    while (curr != NULL)
    {
        printf("%d\n", curr->x);
        curr = curr->next;
    }
}