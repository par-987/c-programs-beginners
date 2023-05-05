#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],ar[n],c;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		ar[i]=arr[i]*arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				c=ar[i];
				ar[i]=ar[j];
				ar[j]=c;

			}
		}
		printf("%d ",ar[i]);
	}
}