#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int DE_queue[MAX], f = -1, r = -1;

void del_rear()
{
    int y = -1;
    if (f == -1 && r == -1)
        printf("DE_queue is underflow");
    else
    {
        y = DE_queue[r];
        if (r == 0)
            r = MAX - 1;
        else if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
            r--;
        printf("The deleted element from rear is %d", y);
    }
}

void add_front()
{
    int x;
    if ((f == 0 && r == MAX - 1) || (f == r + 1))
        printf("DE_queue is  Overflow");
    else
    {
        printf("Enter a number to be inserted from front: ");
        scanf("%d", &x);
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
        }
        else if (f == 0)
            f = MAX - 1;
        else
            f--;
        DE_queue[f] = x;
    }
}

void add_rear()
{
    int x;
    if ((f == 0 && r == MAX - 1) || (f == r + 1))
        printf("DE_queue is  Overflow");
    else
    {
        printf("Enter a number to be inserted from rear: ");
        scanf("%d", &x);
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
        }
        else if (r == MAX - 1)
            r = 0;
        else
            r++;
        DE_queue[r] = x;
    }
}

void del_front()
{
    int y;
    if (f == -1 && r == -1)
        printf("DE_queue is underflow");

    else
    {
        y = DE_queue[f];
        if (f == MAX - 1)
            f = 0;
        else if (f == r)
        {
            f = -1;
            r = -1;
        }

        else
            f++;
        printf("The deleted Element from front is  %d", y);
    }
}

void display()
{
    int i;
    if (f == -1)
    {
        printf("DE_queue is empty");
        return;
    }
    if (f <= r)
    {
        for (i = f; i <= r; i++)
            printf("%d ", DE_queue[i]);
    }

    else
    {
        for (i = 0; i <= r; i++)
            printf("%d ", DE_queue[i]);
        for (i = f; i <= MAX - 1; i++)
            printf("%d ", DE_queue[i]);
    }
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n Press 1. Input Restricted Queue \n Press 2. Output Restricted Queue\n ");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            add_rear();
            break;

        case 2:
            add_front();
            break;

        case 3:
            del_front();
            break;

        case 4:
            del_rear();
            break;

        case 5:
            display();
            break;
        case 6:
            exit(1);

        default:
            printf("Wrong Choice");
        }
    }

    return 0;
}
