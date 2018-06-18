#include "conversion.h"
#include<stdio.h>
int Octal_2_decimal(int Octal);
int ch=0,original_number=0 , temp = 0 ;
int Octal_func(int Octal)
{
	printf("----------------------------------------------\n");
	printf("+==========================+\n");
	printf("|     Octal conversion   |\n");
	printf("+==========================+\n");
	original_number = Octal;
	printf("1. octal 2 Binary\n");
	printf("2. octal 2 decimal \n");
	printf("3. octal 2 Hexadecimal\n");
	printf("\nselect the Conversion you want ::::");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n+==========================+\n");
			printf("|     octal 2 binary	   |\n");
			printf("+==========================+\n");
			temp = Octal_2_decimal(Octal);			
			common_function(temp,2,original_number);
			break;
		case 2:
			printf("+==========================+\n");
			printf("|     octal 2 decimal	   |\n");
			printf("+==========================+\n");
			temp = Octal_2_decimal(Octal);		
			printf("Octal of %d == %d \n",original_number,temp);
			break;
		case 3:
			printf("+==========================+\n");
			printf("|  octal 2 Hexadecimal   |\n");
			printf("+==========================+\n");
			temp = Octal_2_decimal(Octal);			
			common_function(temp,16,original_number);			
			break;				
		default:
			printf("\nOctal conversion function exit\n");	
	}	
}
int Octal_2_decimal(int Octal)
{
	int d = 1 , total =0 ,sum = 0,rem = 0;
	while(Octal>0)
	{
		rem = Octal % 10;
		sum = rem * d;
		total = total +sum;
		d = d*8;
		Octal /=10;
	}	
	return total;	
}

