#include<stdio.h>
main()
{
	FILE *fl;
	char str[200];
	fl=fopen("Studentdata.txt","r");
	//fgets(str,200,fl);
	//printf("%s",str);
	
	while(fgets(str,200,fl))
	{
		printf("%s",str);
	}
}
