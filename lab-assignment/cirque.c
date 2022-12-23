//write a program to implement circular queue using array
#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int* ar;
    int front , rear;
    int n;
}Queue;
void init(Queue* q, int x)
{
    q->front = q->rear = -1;
    q->n = x;
    q->ar = (int*)malloc(sizeof(int)*x);
}
void enqueue(Queue* q,int val)
{
    if((q->front == 0 && q->rear == (q->n) - 1) || (q->rear + 1 == q->front))
    {
        printf("List is full no more entry\n");
        return;
    }
    else if(q->front == -1 && q->rear == -1)
    {
        q->front = 0;
    }
    else if(q->front != 0 && q->rear == (q->n) - 1)
        q->rear = -1;
    q->ar[++(q->rear)] = val; 
}
int dequeue(Queue* q)
{
    if((q->rear == -1 && q->front == -1) || ((q->rear) + 1 == q->front))
    {
        printf("The list is empty nothing to exit\n");
        return -9999;
    }
    int x = q->ar[q->front];
    if(q->front == q->n - 1)
        q->front = 0;
    else
        q->front++;
    return x;
}
void display(Queue q)
{
    if(q.rear < q.front)
    {
        for(int i = q.front; i < q.n ; i++)
            printf("%d ",q.ar[i]);
        for(int i = 0; i <= q.rear; i++)
            printf("%d ",q.ar[i]);
    }
    else if(q.rear > q.front)
    {
        for (int i = 0; i <= q.front; i++)
            printf("%d ",q.ar[i]);
        for (int i = q.front+1; i <= q.rear; i++)
            printf("%d ",q.ar[i]);
    }
    else
        for (int i = q.front; i <= q.rear; i++)
            printf("%d ",q.ar[i]);
}
int main()
{
    Queue q;
    init(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    dequeue(&q);
    dequeue(&q);
    enqueue(&q,60);
    display(q);
    return 0;
}