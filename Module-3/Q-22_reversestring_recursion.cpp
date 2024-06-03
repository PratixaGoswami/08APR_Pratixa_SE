// WAP to find reverse of string using recursion
#include<stdio.h>
void reverse(char s[],int i)
       {
       	if(s[i]=='\0')
       	return;
       	reverse(s,i+1);
       	printf("%c",s[i]);
	   }

main()
{
	char str[50];
	printf("Enter string: ");
	gets(str);
	printf("Reverse string is: ");
	reverse(str,0);
}
