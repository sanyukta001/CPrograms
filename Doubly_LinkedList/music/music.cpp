#include "music.h"
Node* Create_playlist(string nsong)
{
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    temp->song = nsong;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
void append_playlist(Node** head,Node** tail, string nsong)
{
    Node* newnode = Create_playlist(nsong);
    if((*head) == NULL && (*tail == NULL))
    {
        *head = newnode;
        *tail = newnode;
        return;
    }
    (*tail)->next = newnode;
    newnode->prev = *tail;
    (*tail) = (*tail)->next;
}
void add_before(Node** head,Node** tail,int n,string nsong)
{
    Node* newnode = Create_playlist(nsong);
    Node* curr;
    curr = *head;
    while(n--)
    {
        curr = curr->next;
    }
    Node* temp = curr->prev;
    newnode->next = curr;
    newnode->prev = temp;
    curr->prev = newnode;
    temp->next = newnode;
}
void add_after(Node** head,Node** tail,int n,string nsong)
{
    Node* newnode = Create_playlist(nsong);
    Node* curr;
    while(n--)
    {
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = newnode;
    newnode->prev = curr;
    newnode->next = temp;
    temp->prev = newnode;
}
void next(Node** current)
{
    *current = (*current)->next;
}
void jump(Node**current , Node* jumpto)
{
    while((*current)->song != jumpto->song && (*current) != NULL)
    {
        *current = (*current)->next;
    }
}
void first_track(Node* head)
{
    printf("%s",head->song);
}
void last_track(Node* tail)
{
    printf("%s",tail->song);
}
void remove(Node**head,Node* toremove)
{
    Node * curr = *head;
    while(curr->next->song != toremove->song)
    {
        curr = curr->next;
    }
    Node* temp = toremove->next;
    curr->next = temp;
    temp->prev = curr;
    free(toremove);
}
void display_all_tracks(Node* head)
{
    while(head != NULL)
    {
        printf("%s",head->song);
        head = head->next;
    }
}