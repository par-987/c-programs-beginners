//sum of square of n natural numbers
#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the number till you want squares:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d ",i*i);
sum+=i*i;
}
printf("\n");
printf("sum of squares of first %d terms=%d",n,sum);

return 0;
}