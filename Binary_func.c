#include<stdio.h>
#include "conversion.h"
int Binary_func(int binary)
{
	int choice=0,m= 0 ,d=1,temp=0,sum =0,orignal_num=0;
	printf("----------------------------------------------\n");
	printf("+==========================+\n");
	printf("|     Binary conversion	   |\n");
	printf("+==========================+\n");
	orignal_num = binary;
	printf("1. Binary 2 Decimal\n");
	printf("2. Binary 2 Octal\n");
	printf("3. Binary 2 Hexadecimal\n");
	printf("\nselect the Conversion you want ::::");		
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n+==========================+\n");
			printf("|     Binary 2 decimal	   |\n");
			printf("+==========================+\n");
			while(binary>0)	
			{
				temp = (binary %10) * d;
				d=d*2;
				sum += temp;
				m += 1;
				binary = binary/10;
			}
			printf("decimal of %d == %d",orignal_num,sum);	
			break;
		case 2:			
			printf("+==========================+\n");
			printf("|     Binary 2 octal	   |\n");
			printf("+==========================+\n");
			while(binary>0)	
			{
				temp = (binary %10) * d;
				d=d*2;
				sum += temp;
				m += 1;
				binary = binary/10;
			}
			common_function(sum,8,orignal_num);	
			break;
		case 3:
			printf("+==========================+\n");
			printf("|     Binary 2 hexad.	   |\n");
			printf("+==========================+\n");
			while(binary>0)	
			{
				temp = (binary %10) * d;
				d=d*2;
				sum += temp;
				m += 1;
				binary = binary/10;
			}
			common_function(sum,16,orignal_num);	
			break;
		default:
			printf("\nExit from Binary function:::\n");
	}	
}
