#include<stdio.h>
#include<stdlib.h>
#define Size 100
int main()
{
    int stack[Size],top=-1,i;
    int choice,value;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
        printf("Enter the value to be insert: ");
        scanf("%d", &value);
        if(top==Size-1)
        printf("Stack is Full");
        else{
            stack[++top]=value;
            printf("Insertion Successful\n");
        }
        break;
        case 2:
        if(top==-1)
        printf("Deletion not possible\n");
        else{
            printf("Deleted Element is %d", stack[top--]);
         //   top--;
        }
        break;
        case 3:
        if(top == -1)
        printf("The stack is Empty");
        else{
            for(i=top ; i>=0 ; i--)
            printf("%d ", stack[i]);
        }
        break;
        case 4:
        exit(1);
        default:
        printf("Enter a valid choice");
       }
    }
}
        




        



        



        
    

    



