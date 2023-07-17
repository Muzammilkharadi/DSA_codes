#include<stdio.h>
void recursion(int );

int main()
{
 int n;
 printf("Enter n:");
 scanf("%d",&n);
 recursion(n);
 return;
}

void recursion(int n)
{
    if(n>0)
    {
        printf("%d",n);
        recursion(n-1);
        recursion(n-1);
    }
}
