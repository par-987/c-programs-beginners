#include<stdio.h>
void main()
{
	int N,M,d=0;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
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