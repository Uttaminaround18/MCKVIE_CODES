#include <stdio.h>

int main()
{

    int i;
    int k, flag = -1, pos = 0,n;
    printf("Enter the size of Arrays : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the number :");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    printf("Enter the number to be find : ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            flag = 0;
            pos = i;
            break;
        }
    }
    if (flag == 0)
        printf("The number is found at position %d\n", pos + 1);
    else
        printf("The number is not found\n");

    return 0;
}