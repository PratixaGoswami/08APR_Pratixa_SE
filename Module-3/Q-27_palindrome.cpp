// WAP to reverse a string and check that the string is palindrome or not 
#include<stdio.h>
#include<string.h>
 main()
{
	char s1[10],s2[10];
	int cmp;
	printf("Enter String:");
	scanf("%s",&s1);
	strcpy(s2,s1);
	strrev(s1);
	puts(s1);
	cmp=strcmp(s1,s2);
	

	
	if(cmp==0)
	{
		printf("String is palindrome");
		
	}
    else
	{
		printf("String is not palindrome");
	}
}
