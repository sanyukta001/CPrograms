#include "stack.h"
void init(Stack* stack)
{
    int s;
    printf("Enter the number of elements\n");
    scanf("%d",&s);
    stack->arr = (int*)malloc(s*sizeof(int));
    stack->pos = -1;
    stack->n = s;
}
void push(Stack* stack, int value)
{
    if(stack->pos == (stack->n)-1)
    {
        printf("Stack overflow\n");
        return;
    }
    stack->pos+=1;
    stack->arr[stack->pos] = value;
}
int pop(Stack* stack)
{
    if(stack->pos == -1)
    {
        printf("Stack underflow\n");
        return -99999;
    }
    int c = stack->arr[stack->pos];
    stack->pos-=1;
    return c;
}
void peek(Stack stack)
{
    if(stack.pos != -1)
        printf("The element is %d\n",stack.arr[stack.pos]);
    else
        printf("No element\n");
}
