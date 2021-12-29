#include<stdio.h>
#include<stdlib.h>
#define max 1
int queue[max],f=-1,r=-1;
void push()
{
	int x;
	printf("enter the element:");
	scanf("%d",&x);
	if(r==max-1)
	{
		printf("Overflow \n");
	}
	else
	{
		if(f==-1 && r==-1)
		{
			f=0;
			r=0;
		}
		else
		{
			r=r+1;
		}
		queue[r]=x;
	}
}
void pop()
{
	int y;
	if(f==-1 && r==-1)
	{
		printf("underflow \n");
	}
	else
	{
		y=queue[f];
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			f=f+1;
		}
	}
	printf("the deleted item is %d",y);
}
void display()
{
	int x;
	for(x=f;x<=r;x++)
	{
		printf("%d",queue[x]);
	}
}
int main()
{
	int choice;
	printf("For pushing an eliments ,press 1 \n");
	printf("For removing an eliments(pop),press 2 \n");
	printf("For display an array,press 3 \n");
	printf("For exit , press 4 \n");
	while(1)
	{
		printf("Enter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :push();
				break;
			case 2 :pop();
				break;
			case 3 :display();
				break;
			case 4 :exit(1);
			default :
				printf("Invalid choce");
		}
	}
	return 0;
}