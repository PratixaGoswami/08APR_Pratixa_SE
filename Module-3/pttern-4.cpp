/*
A
B C
D E F
G H I J
K L M N O
P Q R S T U*/



#include<stdio.h>
main()
{

	int i,j;
	char n='A';
	for(i= 0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",n);
			n++;
				
		
		}
		
		
		printf("\n");
	}
}
