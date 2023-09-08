#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void main() {
    test_add_next();
    test_append();
}

void test_add_next() {
    Node n;
    n.x = 2;
    n.next = NULL;
    add_next(&n, 4);
    read_all_nodes(&n);
    free(&n);
}

void test_append() {
    Node n;
    n.x = 2;
    n.next = NULL;
    
    append_node(&n, 2);
    append_node(&n, 4);
    append_node(&n, 8);
    read_all_nodes(&n);
    free(&n);
}