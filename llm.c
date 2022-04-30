#include "ll.h"

int main()
{
    node* head = NULL;

    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,4);
    append(&head,5);
    append(&head,6);

    traverse(head);
    delete_node(&head,3);
    printf("After deletion:\n");
    traverse(head);
    add_node(&head,3,3);
    printf("After addition:\n");
    traverse(head);
    printf("Adding after 4th node\n");
    add_after(&head,100,4);
    traverse(head);
    printf("Adding before 5th node\n");
    add_before(&head,200,5);
    traverse(head);

    return 0;
}