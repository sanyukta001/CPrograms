#include "queue.h"
void init(Queue* line,int size)
{
    line->rear = -1;
    line->front = -1;
    line->arr = (int*)malloc(size*sizeof(int));
    line->N = size;
}
int isempty(Queue* line)
{
    if(line->rear == -1 && line->front == -1)
        return 1;
    else
        return 0;
}
int isfull(Queue* line)
{
    if(line->rear == (line->N)-1)
        return 1;
    else
        return 0;
}
void enqueue(Queue* line, int value)
{
    if(isfull(line))
    {
        printf("Que is full\n");
        return;
    }
    if(isempty(line))
    {
        line->front = 0;
    }
    line->rear++;
    line->arr[line->rear] = value;
}
int dequeue(Queue* line)
{
    if(line->rear == line->N-1 && line->front == line->N)
    {
        line->rear = -1;
        line->front = -1;
    }
    if(isempty(line))
    {
        printf("Que is empty\n");
        return -9999;
    }
    int temp = line->arr[line->front];
    line->front++;
    return temp;
}
void display(Queue* line)
{
    int i;
    if(isempty(line))
    {
        printf("Que is empty\n");
        return;
    }
    for(i = line->front;i <= line->rear; i++)
    {
        printf("%d ",line->arr[i]);
    }
}