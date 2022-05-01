#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int data;
    struct st* next;

}node;

node* create_node(int value);
void append(node** head, int value);
void traverse(node* head);
void delete_node(node** head,int n);
void add_node(node** head,int value,int n);
void add_before(node** head, int value, int n);
void add_after(node** head, int value, int n);