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

void delete_end(Node** tail)
{
    Node* temp = *tail;
    if(temp == NULL)
        return;
    *tail = (*tail)->prev;
    (*tail)->next = NULL;
    free(temp);
}

void delete_begin(Node** head)
{
    Node* temp = *head;
    if(temp == NULL)
        return;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);
}

Node* search_by_pos(Node* head,int position)
{
    for (int i = 1 ;i < position; i++)
    {
        head = head->next;   
    }
    return head;
}

void add_in_between_after(Node* pos , int value)
{
    Node* newnode = create_node(value);
    Node* temp = pos;
    if(temp->next == NULL)
    {
        temp->next = newnode;
        newnode->prev = temp;
        return;
    }
    Node* store = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = store;
}

void add_in_between_before(Node* pos , int value)
{
    Node* newnode = create_node(value);
    Node* temp = pos;
    if(temp->prev == NULL)
    {
        temp->prev = newnode;
        newnode->next = temp;
        return;
    }
    Node* store = temp->prev;
    temp->prev = newnode;
    newnode->next = temp;
    newnode->prev = store;
    store->next = newnode;
}

void delete_in_between_after(Node* pos)
{
    if(pos->next == NULL || pos->next->next == NULL)
    {
        printf("Deletion not possible\n");
        return;
    }
    Node* temp = pos->next;
    Node* store = temp->next;
    pos->next = store;
    store->prev = temp->prev;

}

void delete_in_between_before(Node* pos)
{
    if(pos->prev->prev == NULL || pos->prev == NULL)
    {
        printf("Not possible\n");
        return;
    }
    Node* temp = pos->prev;
    Node* store = temp->prev;
    pos->prev = store;
    store->next = temp->next;
}