//A.1. Max heap :  96 56 75 41 23 12 1 2 22
//     Min heap :  1 2 12 23 41 96 22 75 56
//  2. Max heap :  98 93 96 56 12 78 74 45 32
//     Min heap :  12 32 74 45 93 98 78 56 96
//  3. Max heap :  92 86 12 45 63 7 8 41 25
//     Min heap :  7 25 8 41 63 86 12 92 45
//  4. Max heap :  95 86 42 45 63 17 31 20
//     Min heap :  17 20 42 63 95 45 31 86
//  5. Max heap :  96 78 14 52 63 5 2 3 6 42
//     Min heap :  2 3 5 6 42 52 14 78 63 96
//B. After arranging it in Max heap : 96 78 96 36 41 52 14
//   After deleting 2 elements now : 78 41 52 36 14
//C. After arranging it in Min heap : 0 12 12 63 95 96 41 78 63
#include "heap.h"
void init (Heap *hp, int size)
{
    hp->arr = (item*)malloc(sizeof(item)*size);
    hp->rear = -1;
    hp->size = size;
}
void swap(item* a, item* b)
{
    item c = *a;
    *a = *b;
    *b = c;
}
void add_max_heap(Heap* hp, int value)
{
    int child, parent;
    if(hp->rear == hp->size-1)
        return;
    hp->rear++;
    hp->arr[hp->rear] = value;
    child = hp->rear;
    while (child != 0)
    {
        parent = (child-1)/2;
        if(hp->arr[child] > hp->arr[parent])
            swap(&(hp->arr[child]),&(hp->arr[parent]));
        child = parent;
    }
}
void delete_max_heap(Heap* hp)
{
    printf("Rear at %d and element is %d and %d\n",hp->rear,hp->arr[0],hp->arr[hp->rear]);
    if(hp->rear == -1)
        return;

    swap(&(hp->arr[0]),&(hp->arr[hp->rear]));
    hp->rear--;
    display(*hp);
    printf("Rear at %d\n",hp->rear);
    int i = 0;
    while(i <= hp->rear)
    {
        if(hp->arr[2*i+1] > hp->arr[i] || hp->arr[2*i+2] > hp->arr[i])
        {
            if(hp->arr[2*i+1] > hp->arr[2*i+2])
            {
                swap(&(hp->arr[i]),&(hp->arr[2*i+1]));
                i = 2*i+1;
            }
            else
            {
                swap(&(hp->arr[i]),&(hp->arr[2*i+2]));
                i = 2*i+2;
            }
        }
        else
            break;
    }
   display(*hp);
}
void display(Heap hp)
{
    item i;
    for (i = 0; i <= hp.rear; i++)
    {
        printf("%d ",hp.arr[i]);
    }
    printf("\n");
}