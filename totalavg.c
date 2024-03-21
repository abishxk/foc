 #include<stdio.h>
   main()
   {
   	int total,a,b,c,d,e;
   	float avg;
	printf("Enter your marks:\n");
   	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   	if (a<101 && b<101 && c<101 && d<101)
   	{
   		total=a+b+c+d+e;
   		avg=(float)total/5;
   		printf("Total marks:%d",total);
   		printf("\n Average:%f",avg);
	   }
	else
	{
		printf("Invalid input");
	}
   }
   
   
