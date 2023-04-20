//range of armstrong numbers
#include <stdio.h>

int main(){
    int num,r,sum,temp;
    int start,end;

    printf("enter the starting value: ");
    scanf("%d",&start);

    printf("enter the ending value: ");
    scanf("%d",&end);

    printf("Armstrong numbers in given range are: ");
    for(num=start;num<=end;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
return 0;
}