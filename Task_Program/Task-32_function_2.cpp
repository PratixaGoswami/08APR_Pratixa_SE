#include<stdio.h>
void getsum(int a,int b)
{
	printf("\nsum:%d",a+b);
}
void getsub(int a,int b)
	{
		printf("\nsub:%d",a-b);
		
	}
void getmul(int a,int b)
{
	printf("\nmul:%d",a*b);	
}
	

main()
{
	int n1,n2;
	printf("Enter number1:");
	scanf("%d",&n1);
	printf("enter number2:");
	scanf("%d",&n2);
	getsum(n1,n2);
	getsub(n1,n2);
	getmul(n1,n2);
}
