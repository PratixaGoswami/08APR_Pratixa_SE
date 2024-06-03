#include<stdio.h>
int getsum()
{
	int a,b;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	return a+b,a-b,a*b;
	
}
void answer()
{
	int ans;
	ans=getsum();
	printf("\nsum:%d",ans);
	
}
main()
{
	answer();
}
