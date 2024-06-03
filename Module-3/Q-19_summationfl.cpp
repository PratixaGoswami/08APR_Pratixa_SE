#include<stdio.h>
main()
{
	int n,f,l,sum;
	printf("Enter Number:");
	scanf("%d",&n);
	
	l=n%10;
	while(n!=0)
	{
		
		f=n%10;
		n/=10;
		
	}
	sum=l+f;
	printf("%d",sum);
	
}
