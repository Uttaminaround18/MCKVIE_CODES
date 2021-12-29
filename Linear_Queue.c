#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int queue[MAX], f = -1, r = -1;

void insert()
{
    int value;

    if (r == MAX - 1)
        printf("Queue is overflow");
    else
    {

        printf("Enter the element to be Inserted: ");
        scanf("%d", &value);
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
        }
        else
        {
            r++;
        }
        queue[r] = value;
    }
}

void Del()
{
    int y;
    if (f == -1 && r == -1)
        printf("Queue is UnderFlow");
    else
    {
        y = queue[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
            f++;

        printf("The deleted item is %d", y);
    }
}

void display()
{
    int i;
    if (f == -1 && r == -1)
        printf("Queue is Empty");
    else
    {
        for (i = f; i <= r; i++)
            printf("%d ", queue[i]);
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
            insert();
            break;

        case 2:
            Del();
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