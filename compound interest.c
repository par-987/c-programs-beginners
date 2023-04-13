#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t;
float ci;
printf("enter the principle amount:");
scanf("%f",&p);
printf("enter the rate of interest:");
scanf("%f",&r);
printf("enter the time period:");
scanf("%f",&t);
ci=p*(pow((1+r/100),t));
printf("compound interest=%.2f",ci);
return 0;
}