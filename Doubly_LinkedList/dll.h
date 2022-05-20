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
void delete_end(Node** tail);
void delete_begin(Node** head);
Node* search_by_pos(Node* head,int position);
void add_in_between_after(Node* pos , int value);
void add_in_between_before(Node* pos , int value);
void delete_in_between_after(Node* pos );
void delete_in_between_before(Node* pos );