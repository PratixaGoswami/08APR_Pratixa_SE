#include<stdio.h>
void getdata(int id,char nm[20])
{
	printf("Id:%d",id);
	printf("\nName:%s",nm);
	
	
}
main()
{
	int i,total,id;
	char name[20];
	printf("Enter number of student:");
	scanf("%d",&total);
	for(i=1;i<=total;i++)
	{
	    printf("\nenter id:");
	    scanf("%d",&id);
	    printf("\nEnter Name:");
	    scanf("%s",&name);
	    getdata(id,name);
	}
	
}
