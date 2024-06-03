#include<stdio.h>
struct employe
{
	int no,age;
	char name[10],adsress[100];
}emp[5];
main()
{
	//employe emp;
	int n,i;
	printf("Enter value of N:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	printf("Enter Employe number:");
	scanf("%d",&emp[i].no);
	printf("Enter Employe age:");
	scanf("%d",&emp[i].age);
	printf("Enter Employe name:");
	scanf("%s",&emp[i].name);
	printf("Enter Employe address:");
	scanf("%s",&emp[i].adsress);
}

    for(i=1;i<n;i++)
    {
	printf("\nEmploye No:%d",emp[i].no);
	printf("\nEmploye age:%d",emp[i].age);
	printf("\nEmploye Name:%s",emp[i].name);
	printf("\nEmploye Address:%s",emp[i].adsress);
}
	
}
