// WAP to find simple interest 

#include<stdio.h>
main()
{
	float principle,Rate,time,interests;
	printf("Enter the principle of Amount:");
	scanf("%f",&principle);
	printf("Enter the  Rate of interests:");
	scanf("%f",&Rate);
	printf("Enter the Time period(in month):");
	scanf("%f",&time);

	interests=(principle*Rate*time)/100;
	printf("\nthe Interests is %f:",interests);
}
