//write a program to implement stack using linkedliat
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int data;
    struct st* next;
}Node;
typedef struct
{
    Node* head;

}Stack;
void init(Stack* s)
{
    s->head = NULL;
}
Node* createnode(int val)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}
void push(Stack* s, int val)
{
    Node* temp = createnode(val);
    if(s->head == NULL)
    {
        s->head = temp;
        return;
    }
    Node* curr = s->head;
    while(curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
}
int pop(Stack* s)
{
    if(s->head == NULL)
    {
        printf("Stack underflow\n");
        return -9999;
    }
    Node* curr = s->head;
    while(curr->next->next != NULL)
        curr = curr->next;
    int x = curr->next->data;
    curr->next = NULL;
    return x;
}
void display(Stack s)
{
    while(s.head != NULL)
    {
        printf("%d ",s.head->data);
        s.head = s.head->next;
    }
    printf("\n");
}
int main()
{
    Stack s;
    init(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    display(s);
    int x = pop(&s);
    display(s);
    if(x != -9999)
        printf("The deleted element is %d\n",x); 

    return 0;
}