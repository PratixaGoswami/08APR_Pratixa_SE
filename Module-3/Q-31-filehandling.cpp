//WAP to create a file  and write content, save and close the file
#include<stdio.h>
main()
{
	FILE *fl;
	fl=fopen("Hello.txt","a");
	fprintf(fl,"Hii...");
	fclose(fl);
	
}
