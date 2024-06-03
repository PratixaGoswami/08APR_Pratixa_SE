#include<stdio.h>
struct studinfo
{
	int rno;
	char name[10],sub[10];
	
}st,st2;
main()
{
	//studinfo st; //object of structure
	printf("Enter first Roll number:");
	scanf("%d",&st.rno);
	printf("Enter your Name:");
	scanf("%s",&st.name);
	printf("Enter your Subject:");
	scanf("%s",&st.sub);
	
	printf("\nRollnuber:%d",st.rno);
	printf("\nName:%s",st.name);
	printf("\nSubject:%s",st.sub);
	
	printf("\nEnter second Roll number:");
	scanf("%d",&st2.rno);
	printf("\nEnter Name:");
	scanf("%s",&st2.name);
	printf("\nEnter Subject:");
	scanf("%s",&st2.sub);
	
	printf("\nRollnuber:%d",st2.rno);
	printf("\nName:%s",st2.name);
	printf("\nSubject:%s",st2.sub);
	
	
}
