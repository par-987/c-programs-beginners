#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d\n",rev);
    if(a==rev)
    {
        printf("number is pallindrome");
    }
    else
    printf("number is not a pallindrome");
}