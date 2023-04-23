//take array as an user input and print the elements of that array
#include<stdio.h>
int main()
{
int n;//first enter the size of the array means no of elements you want.
printf("enter the number of elements:");
scanf("%d",&n);
int arr[n]; //initialized the array of name=arr and size=n;
for(int i=0;i<n;i++)//initialzed index from 0 to n and enter the value at indexes.
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);//print the elements of the particular index. 
}
return 0;
}