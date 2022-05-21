#include "stack.h"

int main()
{
    Stack stack;
    init(&stack);
    push(&stack,50);
    push(&stack,100);
    push(&stack,200);
    peek(stack);
    pop(&stack);
    peek(stack);
    return 0;
}