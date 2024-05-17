//WAP to convert years into days and days into years 

#include<stdio.h>
main()
	{
		float days,year;
		printf("Enter the number of Days:");
		scanf("%f",&days);
		year=days/365.0;
		printf("Year:%f",year);
		
		printf("\nEnter the number of year:");
		scanf("%f",&year);
		days=year*365.0;
		printf("days:%f",days);
	
}
