#include <stdio.h>

int main(){
    int num,i,ctr,start,end;

    printf("enter the starting number: ");
    scanf("%d",&start);

    printf("enter the ending number: ");
    scanf("%d",&end);
    printf("The prime numbers between %d and %d are : \n",start,end);
  
    for(num = start;num<=end;num++)
       {
         ctr = 0;

         for(i=2;i<=num/2;i++)
            {
             if(num%i==0){
                 ctr++;
                 break;
             }
        }
        
         if(ctr==0 && num!= 1)
             printf("%d ",num);
    }
printf("\n"); 
return 0;
}



