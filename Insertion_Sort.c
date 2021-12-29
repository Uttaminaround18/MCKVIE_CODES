#include <stdio.h>
#define MAX 5
int main()
{
    int arr[MAX], i, j, min = 0;
    printf("Enter the elements of the array: ");
    for (i = 0; i < MAX; i++)
        scanf(" %d", &arr[i]);

    for (i = 1; i < MAX; i++)
    {
        min = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > min)
        {                         
            arr[j + 1] = arr[j];  
            j--;                  
        }
        arr[j + 1] = min;
    }

    for (i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
