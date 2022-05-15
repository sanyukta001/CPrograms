#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    struct st* prev;
    int data;
    struct st* next;
}Node;

Node* create_node(int value);
void append_end(Node** head, Node** tail, int value);
void append_begin(Node** head, Node** tail, int value);
void traverse_forward(Node* head);
void traverse_back(Node* tail);