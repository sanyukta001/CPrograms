#include "dll.h"
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int p;
    append_begin(&head, &tail, 10);
    append_begin(&head, &tail, 20);
    append_begin(&head, &tail, 30);
    append_begin(&head, &tail, 40);
    append_begin(&head, &tail, 50);
    traverse_forward(head);
    printf("\n");
    traverse_back(tail);
    delete_begin(&head);
    delete_end(&tail);
    printf("\n");
    traverse_forward(head);
    printf("\nEnter the position\n");
    scanf("%d",&p);
    Node* pos = search_by_pos(head,p);
    add_in_between_after(pos , 100);
    printf("After adding after\n");
    traverse_forward(head);
    add_in_between_before(pos , 300);
    printf("\nAfter adding before\n");
    traverse_forward(head);
    delete_in_between_after(pos);
    printf("\nAfter deleting after\n");
    traverse_forward(head);
    delete_in_between_before(pos);
    printf("\nAfter deleting before\n");
    traverse_forward(head);
    return 0;
}