#include "conversion.h"
#include<stdio.h>
int Hexa_2_decimal(int Hexa);
int ch1=0,original_numbers=0 , tmp = 0 ;
int Hexadecimal_func(int Hexa)
{
	printf("----------------------------------------------\n");
	printf("+==========================+\n");
	printf("| Hexadecimal conversion   |\n");
	printf("+==========================+\n");
	original_numbers = Hexa;
	printf("1. Hexa 2 Binary\n");
	printf("2. Hexa 2 decimal \n");
	printf("3. Hexa 2 Octal\n");
	printf("\nselect the Conversion you want ::::");	
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
			printf("\n+==========================+\n");
			printf("|     Hexa 2 binary	   |\n");
			printf("+==========================+\n");		
			common_function(Hexa,2,original_numbers);
			break;
		case 2:
			printf("+==========================+\n");
			printf("|     Hexa 2 decimal	   |\n");
			printf("+==========================+\n");
			printf("Hexadeciaml of %X == %d \n",original_numbers,Hexa);
			break;
		case 3:
			printf("+==========================+\n");
			printf("|    Hexadecimal 2 octal   |\n");
			printf("+==========================+\n");
			common_function(Hexa,8,original_numbers);			
			break;				
		default:
			printf("\nHexadeciaml conversion function exit\n");	
	}	
}

