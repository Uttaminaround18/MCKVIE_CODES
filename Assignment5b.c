#include<stdio.h>
#include<stdlib.h>
#define Size 100

void push(int);
void pop();
void display();

int stack[Size],top=-1;
int main()
{
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
        push(value);
        
        break;
        case 2:
        pop();
        break;
        
        case 3:
        display();
        break;
        
        case 4:
        exit(1);
        default:
        printf("Enter a valid choice");
       }
    }
}
void pop()
{
    if(top==-1)
        printf("Deletion not possible\n");
        else{
            printf("Deleted Element is %d", stack[top]);
            top--;
        }
}
void push(int value)
{
    
    if(top==Size-1)
    printf("Stack is Full");
    else{
        stack[++top]=value;
        printf("Insertion Successful\n");
        }
}
void display()
{
    if(top == -1)
        printf("The stack is Empty");
        else{
            for(int i=top ; i>=0 ; i--)
            printf("%d ", stack[i]);
        }
}

        




        



        



        
    

    


