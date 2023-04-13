//check armstrong number 
#include<stdio.h>
#include<math.h>
int main()
{
int n,sum=0,temp;
printf("enter the number:");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
sum=sum+pow(rem,3);
n=n/10;
}
if(temp==sum)
{
printf("number is armstrong");
}
else
printf("not an armstrong number");
return 0;
} 
