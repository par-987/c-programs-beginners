
#include<stdio.h>
int main()
{
int n,rem,rev=0;
printf("enter the 2digit number:");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("reverse of a number=%d",rev);
return 0;
}