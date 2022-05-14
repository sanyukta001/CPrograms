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
//Reversing the list
void reverseList(st** head)
{
    st* prev = NULL;
    st* curr = *head;
    st* nex = NULL;
    while(curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }

    (*head) = prev;

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

}

int main()
{
    st* head = CreateListNode(1);
    appendListNode(&head,2);
    appendListNode(&head,3);
    appendListNode(&head,4);
    appendListNode(&head,5);
    // printf("Before reversing list\n");
    // traverse(head);
    printf("After reversing list\n");
    reverseList(&head);
    traverse(head);
    return 0;
}