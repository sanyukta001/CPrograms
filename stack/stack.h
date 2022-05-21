#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int n;
    int pos;
    int* arr;
}Stack;

void init(Stack* stack);
void push(Stack* stack, int value);
int pop(Stack* stack);
void peek(Stack stack);