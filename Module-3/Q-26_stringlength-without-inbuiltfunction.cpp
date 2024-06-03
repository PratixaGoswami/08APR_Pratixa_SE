// WAP Find out length of string without using inbuilt function
#include<stdio.h>
main()
{
	char str[50];
	int i;
	printf("Enter string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++);
	printf("\nLength of string : %d",i);
	return 0;
		
	
}
