//write a program to insert a node in the beginning of a singly linked list
//write a program to delete a node from the end of a singly linkedlist
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int data;
    struct st* next;
}Node;
Node* createnode(int val)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = val;
    temp->next = NULL;
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
}
void insertAtBegin(Node** head, int val)
{
    Node* newnode = createnode(val);
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }
    newnode->next = *head;
    *head = newnode;
}
void deleteAtEnd(Node** head)
{
    if(*head == NULL)
    {
        printf("List is Empty\n");
        return;
    }
    Node* current = *head;
    while(current->next->next != NULL)
        current = current->next;
    current->next = NULL;
}
void traverse(Node* head)
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
    traverse(head);
    insertAtBegin(&head,100);
    traverse(head);
    deleteAtEnd(&head);
    traverse(head);
    return 0;
}