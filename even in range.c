//print even numbers in given range
#include<stdio.h>
int main()
{
int a,b;
printf("enter the starting value:");
scanf("%d",&a);
printf("enter the ending value:");
scanf("%d",&b);
for(int i=a;i<b;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}}
return 0;
}

