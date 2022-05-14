//Implementing circular linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode* next;
}st;

st* CreateListNode(int data)
{
    st* temp;
    temp = (st*)malloc(sizeof(st));
    temp->data = data;
    temp->next = NULL;

    return temp;
}

void appendListNode(st** head,int value)
{
    st* current = *head;
    st* newnode = CreateListNode(value);
    if((*head)->next == NULL)
    {
        (*head)->next = newnode;
        return;
    }

    while(current->next != NULL)
    {
        current = current->next;
    }

    current->next = newnode;
}

void circularLinkedList(st** head)
{
    st* current = *head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = *head;

}

void traverse(st* head)
{
    st* current = head;
    while(current->next != head)
    {
        printf("%d",current->data);
        printf("\n");
        current = current->next;
    }
    printf("%d\n",current->data);
    current = current->next;
    printf("%d\n",current->data);
    current = current->next;
    printf("%d\n",current->data);

}

int main()
{
    st* head = CreateListNode(1);
    appendListNode(&head,2);
    appendListNode(&head,3);
    appendListNode(&head,4);
    appendListNode(&head,5);
    // traverse(head);
    printf("Circular is\n");
    circularLinkedList(&head);
    traverse(head);
    return 0;
}