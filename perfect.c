
//perfect number
#include <stdio.h>

int  main()
{
  int n,sum=0;
  int mn,mx;

  printf("enter the  number : ");
  scanf("%d",&n);
    
 
    for (int i=1;i<n;i++)
      {
      if(n%i==0)
         {
         sum=sum+i;
         printf("%d  ",i);
         }
       }
printf("\nThe sum of the divisor is : %d",sum);
    if(sum==n)
      printf("\n the number is perfect.");
    else
      printf("\nthe number is not perfect.");
printf("\n");
return 0;
}