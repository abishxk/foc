#include<stdio.h>

main(){
	
	float cel,far;
	printf("Enter the Temperature in Celsius : ");
	scanf("%f",&cel);
	
	far=(cel*9/5)+32;
	
	printf("Temperature in fareheit is : %.1f",far);
}
