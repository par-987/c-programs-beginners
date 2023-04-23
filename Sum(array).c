#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the number of elements you want in array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
sum=sum+arr[i];
}
printf("sum of elements of array=%d",sum);
return 0;
}