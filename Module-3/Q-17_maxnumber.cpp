// Write a program to find out the max from given number

#include<stdio.h>
main()
{
	int n,max=0,ldigit;
	printf("Enter number:");
	scanf("%d",&n);
	while(n>0)
	{
	
	ldigit = n%10;
	{
		if(ldigit>max)
		{
			max=ldigit;
		}
	n/=10;
		
	}
   }
	printf("Max number is:%d",max);

	
		

	

}
