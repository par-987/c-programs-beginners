//sum of first n even numbers
#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the number till you have to print even numbers:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d\n",2*i);
sum+=2*i;
}
printf("sum of even numbers upto %d terms=%d\n",n,sum);
return 0;
}
