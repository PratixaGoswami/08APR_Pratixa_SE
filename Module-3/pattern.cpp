
/*
A
A B
A B C
A B C D
A B C D E
A B C D E F*/
#include<stdio.h>
main()
{

	int i,j;
	for(i= 0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",'A'+j);	
				
		}
		
		printf("\n");
	}
}
