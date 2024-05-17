#include<stdio.h>
void getsum(int a,int b)
{
	printf("sum:%d",a+b);
	
}
main()
{
	int n1,n2;
	printf("Enter number1:");
	scanf("%d",&n1);
	printf("enter number2:");
	scanf("%d",&n2);
	getsum(n1,n2);
}
