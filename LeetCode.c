#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void print(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int isPalin(struct Node *head1, struct Node *head2)
{
    int c = -1;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data != head2->data)
            c = 0;
        else
        {
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    if(c==0)
    return 0;
    else
    return 1;
}

struct Node *rev(struct Node *head)
{
    struct Node *current = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    struct Node *normal = head;

    head = rev(head);
    printf("%d", isPalin(head, normal));

    return 0;
}