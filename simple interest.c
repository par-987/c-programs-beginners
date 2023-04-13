#include<stdio.h>
int main()
{
float p,r,t;
float c;
printf("enter the principal amount:");
scanf("%f",&p);
printf("enter the rate of interest:");
scanf("%f",&r);
printf("enter the time period:");
scanf("%f",&t);
c=(p*r*t)/100;
printf("simple interest =%.2f",c);
return 0;
}