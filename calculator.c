#include<stdio.h>
int main()
{
int a,b,n;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the number from(1-4):");
scanf("%d",&n);
switch(n)
{
case 1:
printf("%d",a+b);
break;
case 2:

printf("%d",a-b);
break;
case 3:
printf("%d",a*b);
break;
case 4:
if(b==0)
{
printf("can't divide");
}
else
printf("%d",a/b);
break;
default:
printf("invalid number is chosen");
break;
}
return 0;
}