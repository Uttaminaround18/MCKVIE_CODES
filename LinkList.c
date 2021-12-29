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
        printf("The elements are %d \n", head->data);
        head = head->next;
    }
}

struct Node *rev(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *fut = head;
    struct Node *curr = head;

    while (curr != NULL)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }

    return prev;
}

int isPalin(struct Node *rev, struct Node *head)
{
    int flag = -1;
    while (head != NULL && rev!=NULL)
    {
        if (head->data != rev->data)
            flag = 0;
        else{
            head = head->next;
            rev = rev->next;
        }
            
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}

struct Node *InsertAt_first(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    head = ptr;
    return head;
}

struct Node *InsertAt_between(struct Node *head, int data, int i)
{
    int k = 1;
    struct Node *p = head;
    while (k != i - 1)
    {
        p = p->next;
        k++;
    }
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;

    // p->data = 5;
    printf("%d \n", p->data);

    return head;
}

struct Node *INsertAt_end(struct Node *head, int data)
{
    struct Node *p = head;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    // p = head;
    // p->data = 5;

    return head;
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

    // head = InsertAt_first(head,10);
    // head = InsertAt_between(head, 500, 3);
    struct Node * normal = head;

    head = rev(head);
    print(head);

    

    return 0;
}
