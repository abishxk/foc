#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
	char bin[10];
	int i,x,dec=0;
	
	printf("Enter a binary number : ");
	scanf("%s",&bin);
	x=strlen(bin);
	
	for(i=0;i<strlen(bin);i++){
		x-=1;
		if(bin[i]=='1'){
			dec+=pow(2,x);
		}
	}
	
	printf("equivalent decimal : %d",dec);
}
