#include<stdio.h>
main()
{
	FILE *fl;
	int id[10],i,n;
	char nm[10][10];
	fl=fopen("Studentdata.txt","a");
	
	printf("Number of student data:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter Student ID:");
		scanf("%d",&id[i]);
		printf("\nEnter Student Name:");
		scanf("%s",&nm[i]);
		
		fprintf(fl,"\nStudent ID:%d",id[i]);
		fprintf(fl,"\nStudent Name:%s",nm[i]);
		
	}
	
	
}
