#include<stdio.h>
main()
{
	FILE *fl;
	int id;
	char nm[10],city[10];
	fl=fopen("stdata.txt","a");
	
	printf("Enter an Id:");
	scanf("%d",&id);
	printf("Enter a name:");
	scanf("%s",&nm);
	printf("Enter city:");
	scanf("%s",&city);
	
	fprintf(fl,"ID:%d",id);
	fprintf(fl,"\nName:%s",nm);
	fprintf(fl,"\ncity:%s",city);
}
