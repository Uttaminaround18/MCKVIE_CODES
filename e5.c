#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node *head,int data)
{
    struct Node *ptr = head->next;
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;

    head->next = p;
    p->next = ptr;
    ptr = NULL;
}

void del(struct Node *head)
{
    struct Node *ptr = head->next;
    head->next = head->next->next;
    free(ptr);
}

void print(struct Node *head)
{
    printf("%d ", head->data);
    struct Node *ptr = head->next;
    while (head != ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
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
    fourth->next = head;

    // head = InsertAt_first(head,10);
    // head = InsertAt_between(head, 500, 3);
    struct Node *normal = head;
    insert(head, 10);
    print(head);
    del(head);
    print(head);

    return 0;
}
