#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void print_linklist(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("The elements are %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *Delete_Atbegin(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *Delete_Atend(struct Node *head)
{
    struct Node *ptr = head->next;
    struct Node *q = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }

    q->next = NULL;
    free(ptr);
    return head;
}

struct Node *Delete_between(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *p = head->next;
    int k = 0;
    while (k != index - 1)
    {
        ptr = ptr->next;
        p = p->next;
        k++;
    }
    ptr->next = ptr->next->next;
    free(p);
    return head;
}

void dup(struct Node *head)
{
    struct Node *curr = head;
    struct Node *ptr = head;

    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            curr = curr->next;
            free(ptr);
            ptr = curr;
        }
        else
            curr = curr->next;
    }
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
    head->data = 1;
    head->next = second;

    // Link second and third nodes
    second->data = 2;
    second->next = third;

    // Link third and fourth nodes
    third->data = 2;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 3;
    fourth->next = NULL;

    // head = Delete_Atbegin(head);
    // head = Delete_between(head, 1);
    // head = Delete_Atend(head);
    dup(head);
    print_linklist(head);

    return 0;
}