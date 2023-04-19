//programe to check enter alphabet is upper case or lower case

#include<stdio.h>
int main()
{
char c;
printf("enter the character:");
scanf("%c",&c);
if(c>='a' && c<='z')
{
printf("%c is the lower case alphabet",c);
}
else if (c>='A' && c<='Z')
{
printf("%c is the upper case alphabet",c);
}
else
printf("you haven't entered the alphabet it might be some special character:");

return 0;
}
