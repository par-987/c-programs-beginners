//reverse of an array
#include<stdio.h>
int main()
{
int n;
printf("enter the number of elements you want in array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=n-1;i>=0;i--)//just make the loop in reverse order.
{
printf("%d",arr[i]);
}
return 0;
}