#include "dll.h"
Node* create_node(int value)
{
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->prev = NULL;
    temp->next = NULL;
    temp->data = value;
    return temp;
}

void append_end(Node** head, Node** tail, int value)
{
    Node* newnode = create_node(value);
    if(*head == NULL)
    {
        *head = newnode;
        *tail = newnode;
        return;
    }
    (*tail)->next = newnode;
    newnode->prev = *tail;
    *tail = (*tail)->next;

    //adding by traversing from begining
    // Node* current = head;
    // while(current->next != NULL)
    // {
    //     current = current->next;
    // }
    // current->next = newnode;
    // newnode->prev = current;

}

void append_begin(Node** head, Node** tail, int value)
{
    Node* newnode = create_node(value);
    if(*head == NULL)
    {
        *head = newnode;
        *tail = newnode;
        return;
    }
    (*head)->prev = newnode;
    newnode->next = *head;
    *head = (*head)->prev;

    //adding by traversing from the end
    // Node* current = head;
    // while(current->next != NULL)
    // {
    //     current = current->next;
    // }
    // current->next = newnode;
    // newnode->prev = current;
}

void traverse_forward(Node* head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}
void traverse_back(Node* tail)
{
    while(tail != NULL)
    {
        printf("%d ",tail->data);
        tail = tail->prev;
    }
}