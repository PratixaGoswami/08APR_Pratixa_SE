// WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int n;
	printf("Enter an integer number:");
	scanf("%d",&n);
	(n % 2 == 0)?printf("%d is even\n",n):printf("%d is odd.\n",n);
	
	
}
