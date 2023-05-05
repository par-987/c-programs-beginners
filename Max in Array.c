#include<stdio.h>
void main()
{
	int N,c;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(arr[i]>arr[j])
			{
				c=arr[i];
				arr[i]=arr[j];
				arr[j]=c;
			}
		}
	}
	printf("%d",arr[N-1]);
}