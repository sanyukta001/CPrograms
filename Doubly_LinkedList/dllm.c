#include "dll.h"
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    append_begin(&head, &tail, 10);
    append_begin(&head, &tail, 20);
    append_begin(&head, &tail, 30);
    append_begin(&head, &tail, 40);
    append_begin(&head, &tail, 50);
    traverse_forward(head);
    printf("\n");
    traverse_back(tail);
    return 0;
}