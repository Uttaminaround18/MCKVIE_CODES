#include <stdio.h>
#define MAX 5
int main()
{
    int arr[MAX], i, j, min=0, temp=0;
    printf("Enter the elements of the array: ");

    for (i = 0; i <MAX; i++)
        scanf(" %d", &arr[i]);

    for (i = 0; i < MAX-1; i++)
    {
        min = i;
        temp = arr[i];
        for (j = i+1; j<MAX; j++)
        {
            if (arr[min] > arr[j])
                min = j;
                
        }
        if (min!= i)
        {
            arr[i] = arr[min];
            arr[min] = temp; 
        }
    }
    printf("Elements after sorted are : ");
    for (i = 0; i < MAX; i++)
        printf("%d ", arr[i]);

    return 0;        
}