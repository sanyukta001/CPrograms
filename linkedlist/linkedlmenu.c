//Implementing liked list in a menu form
#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int data;
    struct st *next;

} node;

node *create_node(int value)
{

    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;

    return temp;
}

void append(node **head, int value)
{
    node *temp = create_node(value);
    node *current = *head;

    if (*head == NULL)
    {
        *head = temp;
        return;
    }
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
}

void traverse(node *head)
{
    while (head->next != NULL)
    {
        printf("%d", head->data);
        printf("\n");
        head = head->next;
    }
    printf("%d\n", head->data);
}

void delete_node(node **head, int n)
{
    node *current;
    current = *head;
    int count = 1;
    if (n == 1)
    {
        *head = (*head)->next;
        return;
    }

    while (count != n - 1)
    {
        current = current->next;
        count++;
    }

    if (count == n - 1)
    {
        current->next = current->next->next;
        return;
    }

    if (current->next->next = NULL)
    {
        current->next = NULL;
        return;
    }
}

void add_node(node **head, int value, int n)
{
    node *current = *head;
    node *rec = create_node(value);
    int count = 1;
    if (n == 1)
    {
        rec->next = *head;
        *head = rec;
        return;
    }

    while (count != n - 1)
    {
        current = current->next;
        count++;
    }

    if (count == n - 1)
    {
        node *temp = current->next;
        current->next = rec;
        rec->next = temp;
        return;
    }

    if (current->next = NULL)
    {
        current->next = rec;
        return;
    }
}

int main()
{
    node *head = NULL;
    int ch;
    int n = 1;
    while (n == 1)
    {
        printf("Enter your choice\n1 for appending element to the list\n2 for adding elements in the list\n3 for deleting a node in the list\n4 for traversing the list\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to be appended\n");
            int value;
            scanf("%d", &value);
            append(&head, value);
            printf("Enter 1 to continue and 0 to stop\n");
            scanf("%d", &n);
            break;

        case 2:
            printf("Enter the value to be added\n");
            int val;
            int po;
            scanf("%d", &val);
            printf("Enter the position at which this element must be added\n");
            scanf("%d", &po);
            add_node(&head, val, po);
            printf("Enter 1 to continue and 0 to stop\n");
            scanf("%d", &n);
            break;

        case 3:
            printf("Enter the position at which this element must be deleted\n");
            int pos;
            scanf("%d", &pos);
            delete_node(&head, pos);
            printf("Enter 1 to continue and 0 to stop\n");
            scanf("%d", &n);
            break;

        case 4:
            printf("The list is:\n");
            traverse(head);
            printf("Enter 1 to continue and 0 to stop\n");
            scanf("%d", &n);
            break;

        default:
            printf("INVALID INPUT");
        }
    }

    return 0;
}