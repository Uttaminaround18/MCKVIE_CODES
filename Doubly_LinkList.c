#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
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

struct Node *Del(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *p = head;
    int s = p->data, k = -1;
    p = head->next;

    while (p != NULL)
    {
        if (s > p->data)
        {
            s = p->data;
            ptr = p->prev;
            k = 0;
        }
        p = p->next;
    }
    if (k == 0)
    {
        ptr->next = ptr->next->next;
        free(p);
        return head;
    }
    else
    {
        head= head->next;
        free(ptr);
        return head;

    }


}

int main()
{

    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));

    // n1 Node
    n1->data = 1;
    n1->next = n2;
    n1->prev = NULL;

    // n2 Node
    n2->data = -1;
    n2->prev = n1;
    n2->next = n3;

    // n3 Node
    n3->data = 30;
    n3->next = n4;
    n3->prev = n2;

    // n4 Node
    n4->data = -10;
    n4->next = NULL;
    n4->prev = n3;

    n1 = Del(n1);
    print(n1);

    return 0;
}