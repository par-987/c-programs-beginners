#include<stdio.h>
int main()
{
int n,temp;
printf("enter the number of elements you want in array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
