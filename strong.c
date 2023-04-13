#include<stdio.h>
int fact(int r)
{
    int mul=1;
    for(int i=1;i<=r;i++)
    {
        mul=mul*i;
    }
    return mul;
    
}
int main()
{
    int n,r,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    int t=n;
    while(n>0)
    {
        r=n%10;
        int c=fact(r);
        n=n/10;
        sum=sum+c;
    }
    if(sum==t)
    {
        printf("number is strong");
    }
    else
    printf("not a strong number");
return 0;
}