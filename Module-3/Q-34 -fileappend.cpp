#include<stdio.h>
main()
{
		FILE *fl;
		int id[10],i,n;
		char nm[10][10];
		fl=fopen("Studentdata.txt","a");
		printf("Enter number of student data:");
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			printf("Enter student id:");
			scanf("%d",&id[i]);
			printf("Enter student name:");
			scanf("%s",&nm[i]);
			
			fprintf(fl,"\nStudent ID:%d",id[i]);
			fprintf(fl,"\nStudent Name:%s",nm[i]);
		}
		
}
