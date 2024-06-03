// WAP to print number in reverse order
#include<stdio.h>
main()
{
	int n,r,i;
	printf("Enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
		
	}
	
   
	
	
}
