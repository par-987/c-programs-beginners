//sum of gp series:
#include<stdio.h>
#include<math.h>
int main()
{
float a1,r,sum,gp;
int n;
printf("enter the first term of series:");
scanf("%f",&a1);
printf("enter the common ratio of series:");
scanf("%f",&r);
//gp series look's like this a,ar,ar*2; where a is the first term and r is the common ratio
printf("enter the number of terms in gp series:");
scanf("%d",&n);
printf("\nThe numbers for the G.P. series:\n ");
printf("%f ",a1);
sum=a1;
for(int i=1;i<n;i++)
{
gp=a1*pow(r,i);
sum=sum+gp;
printf("%.3f ",gp);
}
printf("\n");
printf("sum of gp series=%.3f",sum);
return 0;
}







