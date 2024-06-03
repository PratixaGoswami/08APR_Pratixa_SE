#include<stdio.h>
main()
{
	FILE *fl;
	char str[200];
	fl=fopen("Studentdata.txt","r");
	 //fscanf(fl,"%S",&str);
	 //fgets(str,200,fl);
	  
	  while(fgets(str,200,fl))
	  {
	  	printf("%s",str);
	  }
}
