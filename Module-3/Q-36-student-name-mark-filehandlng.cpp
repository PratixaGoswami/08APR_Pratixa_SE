//WAP to read name and marks of n number of student and store them in a file.
#include<stdio.h>
main()
{
	FILE *fl;
	fl=fopen("stud.txt","a");
	int n,mark,i;
	char nm[10];
	printf("Enter number of student: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter name of student:");
		scanf("%s",&nm);
		printf("\nEnter mark of student:");
		scanf("%d",&mark);
		fprintf(fl,"\nName:%s",nm);
		fprintf(fl,"\nMarks:%d",mark);
	}
}
