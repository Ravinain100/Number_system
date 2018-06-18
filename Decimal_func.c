#include<stdio.h>
int common_function(int Decimal,int base,int original_num);
int choice=0,original_num=0,arr[31],j=0,i= 0,rem =0 ;
int Decimal_func(int Decimal)
{
	printf("----------------------------------------------\n");
	printf("+==========================+\n");
	printf("|     Decimal conversion   |\n");
	printf("+==========================+\n");
	original_num = Decimal;
	printf("1. Decimal 2 Binary\n");
	printf("2. Decimal 2 Octal \n");
	printf("3. Decimal 2 Hexadecimal\n");
	printf("\nselect the Conversion you want ::::");	
	scanf("%d",&choice);
	printf("\n\n");
	switch(choice)
	{
		case 1:
			printf("+==========================+\n");
			printf("|     Decimal 2 binary	   |\n");
			printf("+==========================+\n");
			common_function(Decimal,2,original_num);
			break;
		case 2:
			printf("+==========================+\n");
			printf("|     Decimal 2 octal	   |\n");
			printf("+==========================+\n");
			common_function(Decimal,8,original_num);
			break;
		case 3:
			printf("+==========================+\n");
			printf("|  Decimal 2 Hexadecimal   |\n");
			printf("+==========================+\n");
			common_function(Decimal,16,original_num);
			break;
				
		default:
			printf("\nDecimal conversion function exit\n");	
	}	
}
int common_function(int Decimal,int base,int original_num)
{	
	printf("converted value of %d == ",original_num);
	while(Decimal>0)
	{
		rem = Decimal%base;
		if(rem <= 9)
		{
			arr[i]=rem;
			//printf("%d",rem);
		}
		else
		{
			rem = rem -10+ 'A';
			arr[i]=rem;
			//printf("%c",rem);
		}
		i +=1;
		Decimal = Decimal/base;
	}
	for (j=i-1;j>=0;j--)	
	{
		if(arr[j]<10)
			printf("%d",arr[j]);
		else
			printf("%c",arr[j]);
	}
	printf("\n");							
}
