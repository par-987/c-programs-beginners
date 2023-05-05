#include<stdio.h>
void main()
{
    int c,T,N;
    
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++)
    {
        for(int f=i+1;f<N;f++)
        {
            if(arr[i]>arr[f])
            {
                c=arr[i];
                arr[i]=arr[f];
                arr[f]=c;
                
            }
        }
    }
    scanf("%d",&T);
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            for(int k=j+1;k<N;k++)
            {
                if(arr[i]+arr[j]+arr[k]==T)
              {
                  printf("%d%s %d %s %d\n",arr[i],",",arr[j],"and",arr[k]);
              }
            }
        }
        
    }
}
