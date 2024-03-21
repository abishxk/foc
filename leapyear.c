#include<stdio.h>
main()
{
int year,c=0,i;
printf("Enter a year:\n");
scanf("%d",&year);
if (year%4==0)
{
printf("The given year %d is a leap year",year);
}
else
{
for (i=year+1;i<=year+4;i++)
{
if (i%4==0)
printf("The given year is not a leap year. The next leap year is %d",i);
if (c==1)
return;
}
}
}
