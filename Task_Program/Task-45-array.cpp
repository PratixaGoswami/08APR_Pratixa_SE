#include<stdio.h>
main()
{
	int id[50],i,n;
	char nm[50][10];
	printf("Enter number of student:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter your id:");
		scanf("%d",&id[i]);
		 
		printf("Enter your name:");
		scanf("%s",&nm[i]);
		 
	}
	for(i=0;i<n;i++)
	{
		printf("\nId:%d",id[i]);
		printf("\nName:%s",nm[i]);
	}
}
