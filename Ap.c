//sum of ap series:
#include<stdio.h>
int main()
{
int a,d,n;
float sn;//sn=sum of ap series
printf("enter the first term of ap series:");
scanf("%d",&a);
printf("enter the value of common difference:");
scanf("%d",&d);
printf("enter the number of terms in series:");
scanf("%d",&n);
sn=n/2*[2*a+(n-1)*d];
printf("sum of the ap series=%.2f",sn);
return 0;
}