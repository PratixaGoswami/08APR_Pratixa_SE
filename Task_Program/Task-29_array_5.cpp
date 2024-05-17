#include<stdio.h>
main()
{
	char nam[5][12];
	int i,number;
	printf("enter number of student name:");
	scanf("%d",&number);
	for (i=0;i<5;i++)
	{
		printf("\nEnter student name:");
		scanf("%s",&nam[i]);
		
		printf("\nname is:%s",nam[i]);
	}
}
