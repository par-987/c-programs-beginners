//sum of first n odd numbers
#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the number till you have to print odd numbers:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d\n",2*i-1);
sum+=2*i-1;
}
printf("sum of odd numbers upto %d=%d\n",n,sum);
return 0;
}
