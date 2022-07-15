#include "heap.h"
int main()
{
    Heap h;
    init(&h,15);
    add_max_heap(&h,52);
    add_max_heap(&h,41);
    add_max_heap(&h,96);
    add_max_heap(&h,36);
    add_max_heap(&h,78);
    add_max_heap(&h,90);
    add_max_heap(&h,14);
    display(h);
    printf("\nAfter deleting one node\n");
    delete_max_heap(&h);
    // add_max_heap(&h,2);
    // add_max_heap(&h,56);
    display(h);

    return 0;
}