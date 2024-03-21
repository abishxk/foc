#include<stdio.h>
main()
{
int b,rev=0,x,y;
printf("Enter a number:");
scanf("%d",&b);
y=b;

while (b!=0)
{
	x=b%10;
	rev=rev*10+x;
	b/=10;
}
if (rev==y)
{
printf("Given number %d is a pallindrome",y);
}
else
{
printf("Given number %d is not a pallindrome",y);
}
}
