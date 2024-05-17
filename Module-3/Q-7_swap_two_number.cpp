// WAP to swap two numbers without using third variable 

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swaping, A=%d and B=%d\n",a,b);
	
}
