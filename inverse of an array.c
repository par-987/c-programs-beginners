#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],x[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		x[arr[i]]=i;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
}