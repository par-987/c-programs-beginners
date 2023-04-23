//hcf of two numbers
#include<stdio.h>
int main()
{
int a,b,i,j,hcf;
printf("enter the 1st number:");
scanf("%d",&a);
printf("enter the 2nd number:");
scanf("%d",&b);
j=(a<b)?a:b; //?is a ternary operator if condition is true take //a else take b.
for(i=1;i<=j;i++)
{
if(a%i==0 && b%i==0)
{
hcf=i;
}
}

printf("HCF of %d and %d=%d",a,b,hcf);
return 0;
}
//for lcm we can simply use the formula=hcf*lcm=product of two numbere: