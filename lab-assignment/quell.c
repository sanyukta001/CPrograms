//write a program to implement linear queue uing linkedlist
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int data;
    struct st* next;
}Node;
typedef struct
{
    Node* front;
    Node* rear;

}Queue;
void init(Queue* s)
{
    s->front = NULL;
    s->rear = NULL;
}
Node* createnode(int val)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}
void enqueue(Queue* s, int val)
{
    Node* temp = createnode(val);
    if(s->front == NULL && s->rear == NULL)
    {
        s->front = temp;
        s->rear = temp;
        return;
    }
    s->rear->next = temp;
    s->rear = s->rear->next;

}
int dequeue(Queue* s)
{
    if(s->front == NULL)
    {
        printf("nothing to dequeue\n");
        return -9999;
    }
    int x = s->front->data;
    s->front = s->front->next;
    return x;
}
void display(Queue s)
{
    while(s.front != NULL)
    {
        printf("%d ",s.front->data);
        s.front = s.front->next;
    }
    printf("\n");
}
int main()
{
    Queue s;
    init(&s);
    enqueue(&s,10);
    enqueue(&s,20);
    enqueue(&s,30);
    enqueue(&s,40);
    display(s);
    int x = dequeue(&s);
    display(s);
    if(x != -9999)
        printf("The deleted element is %d\n",x); 

    return 0;
}