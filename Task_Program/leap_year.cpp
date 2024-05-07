#include<stdio.h>
main()
{
	int year;
	printf("Enter Year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("This is leap");
	}
	else
	{
		printf("This is not leap year");
	}
}
