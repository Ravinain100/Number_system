#include"conversion.h"
#include<stdio.h>
int main()
{
	int choice=0 , binary = 0,decimal =0, hex =0,octal =0,output=0;
	printf("----------------------------------------------\n");
	printf("+=======================+\n");
	printf("|    Conversion         |\n");
	printf("+=======================+\n\n");
	
	printf("1. Binary\n");    //Binary_func
	printf("2. Decimal\n");   // Decimal_func
	printf("3. Octal\n");
	printf("4. Hexadecimal\n");
	printf("Enter your input base type ::::");	
	scanf("%d",&choice);	
	switch(choice)
	{
		case 1: printf("\n Enter your input :::");
			scanf("%d",&binary);
			Binary_func(binary);
			break;
		case 2: printf("\n Enter your input :::");
			scanf("%d",&decimal);
			Decimal_func(decimal);
			break;
		case 3: printf("\n Enter your input :::");
			scanf("%d",&octal);
			Octal_func(octal);
			break;
		case 4: printf("\n Enter your input :::");
			scanf("%x",&hex);
			Hexadecimal_func(hex);
			break;		
		default:
			printf("Wrong input:::");		
	}
}
