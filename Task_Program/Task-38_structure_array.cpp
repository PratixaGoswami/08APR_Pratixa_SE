#include<stdio.h>
struct studinfo
{
	int id;
	char nm[10],sub[10];
	
}st[5];
main()
{
	int n,i;
	printf("enter Value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter id:");
		scanf("%d",&st[i].id);
		printf("Enter a name:");
		scanf("%s",&st[i].nm);
		printf("Enter a subject:");
		scanf("%s",&st[i].sub);
		
	}
	for(i=1;i<=n;i++)
	{
		printf("\nID:%d",st[i].id);
		printf("\nName:%s",st[i].nm);
		printf("\nsubject:%s",st[i].sub);
	}
}
