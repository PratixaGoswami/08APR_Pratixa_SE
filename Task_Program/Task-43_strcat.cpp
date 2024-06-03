#include<stdio.h>
#include<string.h>
main()
{
	int len1,len2,i;
	char s1[30]="pratixa";
	char s2[10]="goswami";
//	strcat(s1,s2);

     len1=strlen(s1);
     len2=strlen(s2);
     for(i=0;i<=len2;i++)
     {
     	s1[len1+i]=s2[i];
     	
	 }
	 printf("string after cancatenation is: %s",s1);


}
