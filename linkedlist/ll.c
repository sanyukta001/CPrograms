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
    printf("%d\n",head->data);

 }

 void delete_node(node** head, int n)
 {
    node* current;
    current = *head;
    int count = 1;
    if(n == 1)
    {
        *head = (*head)->next;
        return;
    }
    
    while(count != n-1)
    {
        current = current->next;
        count++;
    }


    if(count == n-1)
    {
        current->next = current->next->next;
        return;
    }

    if( current->next->next = NULL)
    {
        current->next = NULL;
        return;
    }
 }

 void add_node(node** head,int value,int n)
 {
    node* current = *head;
    node* rec = create_node(value);
    int count = 1;
    if(n == 1)
    {
        rec->next = *head;
        *head = rec;
        return;
    }

    while(count != n-1)
    {
        current = current->next;
        count++;
    }

    if(count == n-1)
    {
        node *temp = current->next;
        current->next = rec;
        rec->next = temp;
        return;
    }

    if(current->next = NULL)
    {
        current->next = rec;
        return;
    }

 }

 void add_before(node** head, int value, int n)
 {
    int count = 0;
    node* rec = create_node(value);
    node* current = *head;
    if(count == 1)
    {
        rec->next = current;
        *head = rec;
        return;
    }
    while (count != n-2)
    {
        current = current->next;
        count++;
    }
    if(count == n-2)
    {
        node* temp = current->next;
        current->next = rec;
        rec->next = temp;
    }
    
 }

 void add_after(node** head, int value, int n)
 {
    node* current = *head;
    node* rec = create_node(value);
    int count = 1;
    while(count != n)
    {
        current = current->next;
        count++;
    }

    if(current->next == NULL)
    {
        current->next = rec;
        return;
    }

    if(count == n)
    {
        node* temp = current->next;
        current->next = rec;
        rec->next = temp;
    }

 }