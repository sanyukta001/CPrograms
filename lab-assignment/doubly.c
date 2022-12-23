//write a program to insert a node in the end of a doubly linkedlist
//write a program to delete a node after a given element of a doubly linkedlit
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    struct st* prev;
    int data;
    struct st* next;
}Node;
Node* createnode(int val)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
void append(Node** head, int val)
{
    Node* newnode = createnode(val);
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }
    Node* current = *head;
    while(current->next != NULL)
        current = current->next;
    current->next = newnode;
    newnode->prev = current;
}
void deleteafter(Node** head,int val)
{
    Node* current = *head;
    while(current->data != val)
    {
        current = current->next;
    }
    if(current->next->next == NULL)
        current->next = NULL;
    else
    {
        current->next = current->next->next;
        current->next->prev = current;
    }
}
void display(Node* head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    Node* head = NULL;
    append(&head,10);
    append(&head,20);
    append(&head,30);
    append(&head,40);
    display(head);
    deleteafter(&head,20);
    display(head);
    return 0;
}