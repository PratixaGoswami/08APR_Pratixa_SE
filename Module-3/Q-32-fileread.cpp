//WAP to read file content and display on console.
#include<stdio.h>
main()
{
	FILE *fl;
	char str[50];
	fl=fopen("Hello.txt","r");
	while(fgets(str,50,fl));
	{
		printf("%s",str);
	}
	
}
