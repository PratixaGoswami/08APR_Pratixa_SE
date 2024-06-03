#include<stdio.h>
#include<string.h>
main()
{
	char nm[30];
	int count=0,i=0;
	printf("Enter name:");
    gets(nm);
  //  count=strlen(str);
  //  printf("%d",count);
  while(nm[i]!=0)
  {
  	count++;
  	i++;	
  }
  printf("length of string :%d",count);
    
}
