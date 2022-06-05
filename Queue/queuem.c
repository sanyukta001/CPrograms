#include "queue.h"
int main()
{
    Queue line;
    int size;
    printf("Enter the size\n");
    scanf("%d",&size);
    init(&line,size);
    enqueue(&line,10);
    enqueue(&line,20);
    enqueue(&line,30);
    enqueue(&line,40);
    enqueue(&line,50);
    enqueue(&line,60);
    int x = dequeue(&line);
    if(x != -9999)
    {
        printf("The deleted item is %d\n",x);
    }
    display(&line);
    return 0;
}
