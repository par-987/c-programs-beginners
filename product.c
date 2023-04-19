//product till n numbers
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
printf("product of %d numbers=%d",n,pro);
return 0;
}
