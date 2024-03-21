#include<stdio.h>
int a,i,f=1;
factorial()
{
	for(i=a;i>0;i--)
	{
		f=f*i;
	}
	return f;
}

main()
{
	printf("Enter a number:");
	scanf("%d",&a);
	factorial();
	printf("factorial of given number is %d",f);
}
