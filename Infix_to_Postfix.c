#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define MAX 10
int tos=-1;
char stck[MAX];
void push(char x)
{
    if(tos==MAX - 1)
	{
        printf("\nStack Overflow");
    }
    else{
        tos++;
        stck[tos]=x;
    }
}
char pop()
{
    char y='\0';
    if(tos==-1)
	{
        printf("\nStack is Empty");
    }
    else
	{
        y=stck[tos];
        tos--;
    }
    return y;
}
int preced(char x)
{
    int v;
    if(x=='^')
	{
        v=100;
    }
    else if(x=='*' || x=='/')
          v=99;
    else if(x=='+' || x=='-')
          v=98;
    else
        v=97;
    return v;                
}
int main()
{
    char p[100],q[100],x;
    int i=0,j=0,u=0;
    printf("Enter your infix expression,append ): ");
    gets(q);
    push('(');
    while(q[i]!='\0')
	{
        if(isalpha(q[i]))
		{
            p[j]=q[i];
            j++;
        }
        else{
            if(q[i]=='(')
			{
                push(q[i]);
            }
            else if(q[i]==')')
			{
                x=pop();
                while(x!='(')
				{
                    p[j]=x;
                    j++;
                    x=pop();
                }
            }
            else
			{
              while(preced(stck[tos])>=preced(q[i]))
			  	{
                  p[j]=pop();
                  j++;
                }
                push(q[i]);
            }
        }
        i++;
    }
    p[j]='\0';
    printf("\nPostfix Expression is: %s",p);
    return 0;
}