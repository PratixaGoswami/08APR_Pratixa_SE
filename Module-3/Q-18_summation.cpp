// Write a program make a summation of given number

#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(n!=0)
	{
	 sum+=n%10;
	 n=n/10;
	 	
	}
	printf("Sum of digit = %d",sum);
	

		
		
		
			


}
