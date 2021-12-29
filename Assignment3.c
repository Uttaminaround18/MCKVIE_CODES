#include<stdio.h>
void f(int,int,int);
int main()
{
    int n;
    printf("Enter the number of terms for fibonacci Series: ");
    scanf("%d", &n);
    if(n==1)
    printf("%d", 0);
    else
    printf("%d %d ",0,1);
    f(0,1,n-2);
    printf("\n");
    

}
void f(int n1, int n2, int n3)
{
    if(n3>0){
    int m=0;
    m=n1+n2;
    n1=n2;
    n2=m;
    printf("%d " ,m);
    f(n1,n2,n3-1);
    }
    return;
}
    


