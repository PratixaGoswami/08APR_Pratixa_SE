//WAP to compare two files.
#include<stdio.h>
#include<string.h>
main()
{
	FILE *fl;
	char str[100];
	fl=fopen("File1.txt","r");
	fscanf(fl,"%s",str);
	printf("%s",str);
	fclose(fl);
	
	FILE *fl2;
	char str2[100];
	fl2=fopen("File2.txt","r");
	fscanf(fl2,"\n%s",str2);
	printf("%s",str2);
    
    if(strcmp(str,str2)==0)
    {
    	printf("\nFile are same...");
	}
	else
	{
			printf("Error..");
	}
fclose(fl2);
	

	
	
}
