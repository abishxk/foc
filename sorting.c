#include<stdio.h>
main()
{
	int arr[5];
	int x;
	int i;
	printf("enter an number of elements:\n");
	scanf("%d",x);
	for (i=0;i<=x;i++)
	{
		printf("Enter elements of the array:\n");
		scanf("%d",arr[i]);
	}
	printf("%d",arr);
}
