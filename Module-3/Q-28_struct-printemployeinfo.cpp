/* Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age*/
#include<stdio.h>
struct employe
{
	int no,age;
	char name[10],adsress[100];
}emp;
main()
{
	//employe emp;
	printf("Enter Employe number:");
	scanf("%d",&emp.no);
	printf("Enter Employe age:");
	scanf("%d",&emp.age);
	printf("Enter Employe name:");
	scanf("%s",&emp.name);
	printf("Enter Employe address:");
	scanf("%s",&emp.adsress);

	
	printf("\nEmploye No:%d",emp.no);
	printf("\nEmploye age:%d",emp.age);
	printf("\nEmploye Name:%s",emp.name);
	printf("\nEmploye Address:%s",emp.adsress);
	
	
}
