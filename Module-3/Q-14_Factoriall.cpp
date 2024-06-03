#include<stdio.h>
main()
{
	int num,i,F=1;
	printf("Enter Number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		F=F*i;
	}
	printf("The Factorial of %d is: %d\n",num,F);
}
