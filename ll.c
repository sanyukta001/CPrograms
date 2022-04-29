#include "ll.h"

node* create_node(int value)
{

    node* temp;

    temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;

    return temp;
}

 void append(node** head,int value)
 {
    node* temp = create_node(value);
    node* current = *head;

    if(*head == NULL)
    {
        *head = temp;
        return;
    }
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
 }

 void traverse(node* head)
 {
    while(head->next != NULL)
    {
        printf("%d",head->data);
        printf("\n");
        head = head->next;
    }

 }

 void delete_node(node** head, int n)
 {
    node* current;
    current = *head;
    int count = 1;
    while(count != n-1)
    {
        current = current->next;
        count++;
    }
    if(count == n-1)
    {
        current->next = current->next->next;
    }
 }

 void add_node(node** head,int value,int n)
 {
    node* current = *head;
    int count = 1;
    while(count != n-1)
    {
        current = current->next;
        count++;
    }
    if(count == n-1)
    {
        node *temp = current->next;
        node* rec = create_node(value);
        current->next = rec;
        rec->next = temp;
    }

 }