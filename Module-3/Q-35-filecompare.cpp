//WAP to compare two files.
#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *f1,*f2;
	int A,B;
	f1=fopen("a.txt","r");
	f2=fopen("b.txt","r");
	
	if(f1==NULL || f2==NULL)
	{
		printf("Can not read file");
	}

		A=getc(f1);
		B=getc(f2);
		
		while(A!=EOF && B!=EOF )
		{
		A=getc(f1);
		B=getc(f2);
		}
		if(A==B)
		{
			printf("File are same");
			
		}
		else if(A!=B)
		{
			printf("File are not same");
		}
		else
		{
			printf("\nsome crap occured");
		}
	
	fclose(f1);
	fclose(f2);
	
	
}
