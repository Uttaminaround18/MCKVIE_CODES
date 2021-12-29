#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, i, n, a[100], max, min, k, l = 0, Number, position, u;
	printf("\n\n1.Choice-1: For Find Max and Min\n\n2.Choice-2: For Insert an element\n\n3.Choice-3: For Remove Element\n\n4.Choice-4: For Display the array\n\n5.Exit\n");
    printf("Enter the size of Arrays: ");
    scanf("%d", &n);
    printf("\nEnter the Integer Numbers one by one: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	while (1)
	{
		printf("\n\n");
		printf("\nEnter your choice: ");
		scanf("\n%d", &m);

		switch (m)
		{

		case 1:
		
            max = min = a[0];
			for (i = 1; i < n; i++)
			{
				if (min > a[i])
				{
					min = a[i];
					k = i;
				}
				if (max < a[i])
				{
					max = a[i];
					l = i;
				}
			}
			printf("maximum element is:%d at position %d \n", max, (l + 1));
			printf("minimum element is:%d at position %d \n", min, (k + 1));
			break;
		
		
		break;
	    case 2:
		
            printf("\nEnter the position in which , you want to insert the element: ");
		    scanf("\n%d", &position);
		    printf("\nEnter the integer value you want to insert: ");
		    scanf("\n%d", &Number);

		    for (i = n - 1; i >= position - 1; i--)
		    {
			  a[i + 1] = a[i];
		    }
		    a[position - 1] = Number;
		    n++;
		
		    break;
	    case 3:
		
	
		     printf("\nEnter the position of element which you want to Remove: ");
		        scanf("\n%d", &position);

		    position--;
		    if (position >= 0 && position <= n)
		    {
			for (i = position; i < n - 1; i++)
				a[i] = a[i + 1];
			n--;
		}
		
		    break;
	

	
	    case 4:
		
            for(int i=0;i<n;i++)
		     printf("%d ", a[i]);
		     break;
		


	    case 5:
		
	         exit(1);
		
		}
	}
	return 0;
}