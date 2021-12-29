#include <stdio.h>


int main()
{
    int a[5];
    int len = sizeof(a) / sizeof(a[0]);
    int mid = 0, LB = 0, UB = len - 1, f = -1, x, pos = 0;
    printf("Enter the numbers :");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d", &x);

    while (LB <= UB)
    {
        mid = (UB + LB) / 2;
        if (a[mid] == x)
        {
            f = 1;
            pos = mid;
            break;
        }
        else if (a[mid] > x)
        {
            UB = mid - 1;
        }
        else
        {
            LB = mid + 1;
        }
    }
    if (f == 1)
        printf("Succesful search of %d at position %d\n", a[pos], pos + 1);
    else
        printf("Not found\n");
        return 0;
}
        


