#include<stdio.h>
void main()
{
	int N,M,c,d=0;
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
	scanf("%d",&M);
	for(int i=0;i<N;i++)
	{
		if(arr[i]==M)
		{
			printf("%d",i);
			d=1;
			break;
		}
		
	}
	if(d==0)
	{
		printf("%d",-1);
	}

}
