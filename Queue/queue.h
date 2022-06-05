#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int rear;
    int front;
    int N;
    int* arr;
}Queue;

void init(Queue* line , int size);
int isfull(Queue* line);
int isempty(Queue* line);
void enqueue(Queue* line, int value);
int dequeue(Queue* line);
void display(Queue* line);