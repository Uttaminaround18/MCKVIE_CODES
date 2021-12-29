#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int Queue[MAX], f = -1, r = -1;

void insertion()
{
    int x;

    if ((f == 0 && r == MAX - 1) || (f == r + 1))
        printf("Queue is  Overflow");
    else
    {
        printf("Enter a number to be inserted: ");
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
        Queue[r] = x;
    }
}

void deletion()
{
    int y;
    if (f == -1 && r == -1)
        printf("Queue is underflow");

    else
    {
        y = Queue[f];
        if (f == MAX - 1)
            f = 0;
        else if (f == r)
        {
            f = -1;
            r = -1;
        }

        else
            f++;

        printf("The deleted Element is %d", y);            
    }
    
}

void display()
{
    int i;
    if (f == -1)
    {
        printf("Queue is empty");
        return;
    }
    if (f <= r)
    {
        for (i = f; i <= r; i++)
            printf("%d ", Queue[i]);
    }

    else
    {
        for (i = f; i <= MAX - 1; i++)
            printf("%d ", Queue[i]);
        for (i = 0; i <= r; i++)
            printf("%d ", Queue[i]);
    }
}

int main()
{
    int ch;

    while (1)
    {
        printf("\nPress 1. Insert\nPress 2. Delete\nPress 3. Display\nPress 4. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertion();
            break;

        case 2:
            deletion();
            break;

        case 3:
            display();
            break;
        case 4:
            exit(1);

        default:
            printf("Wrong Choice");
        }
    }

    return 0;
}
