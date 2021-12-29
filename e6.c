#include <stdio.h>
#include <stdlib.h>
int c = 0;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void print(struct Node *head)
{
    if (head->next != NULL)
    {

        while (head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
    }
    else{
         while (head != NULL)
        {
            printf("%d ", head->data);
            head = head->prev;
        }

    }
}

struct Node *find_small(struct Node *head)
{
    struct Node *ptr = NULL;
    int small = head->data;
    while (head->next != NULL)
    {
        if (small > head->next->data)
        {
            small = head->next->data;
            ptr = head->next;
        }

        head = head->next;
    }
    printf("The smallest element in linked list is %d\n  ", small);
    return ptr;
}

struct Node *del(struct Node *head)
{
    if (head->next == NULL)
    {
        struct Node *p = head;
        struct Node *ptr = head->prev;
        ptr->next = NULL;
        p->next = NULL;
        free(p);
        p = NULL;
        return ptr;
        c = 1;
    }
    else if (head->prev == NULL)
    {
        struct Node *p = head;
        struct Node *ptr = head->next;
        ptr->prev = NULL;
        p->prev = NULL;
        free(p);
        p = NULL;
        return ptr;
        c = 1;
    }
    else
    {
        struct Node *ptr = head->next;
        struct Node *ptr1 = head->prev;

        ptr->prev = ptr1;
        ptr1->next = ptr;

        free(head);
    }
}

int main()
{

    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n = n1;

    // n1 Node
    n1->data = -10000;
    n1->next = n2;
    n1->prev = NULL;

    // n2 Node
    n2->data = -20;
    n2->prev = n1;
    n2->next = n3;

    // n3 Node
    n3->data = -5000;
    n3->next = n4;
    n3->prev = n2;

    // n4 Node
    n4->data = -1000;
    n4->next = NULL;
    n4->prev = n3;

    n1 = find_small(n1);
    n1 = del(n1);
    if (c != 1)
        print(n);
    else
        print(n1);

    return 0;
}