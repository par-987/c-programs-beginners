#include<stdio.h>
int main()
{
int n,pro=1;
printf("enter the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
pro=pro*i;
}
printf("factorial of a number=%d",pro);
return 0;
}