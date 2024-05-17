#include<stdio.h>
main()
{
	int id[5],num,i;
	printf("enter number of student id:");
	scanf("%d",&num);
		
	for(i=0;i<=5;i++)
	{
		printf("\nEnter Id:");
		scanf("%d",&id[i]);
		printf("\nID is:%d",id[i]);
		
	}
	
}
