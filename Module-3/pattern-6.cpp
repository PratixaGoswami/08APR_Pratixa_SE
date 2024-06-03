  /*
    *
   ***
  *****
 *******
*********
*/

#include<stdio.h>
main()
{
	int i,j,k;
	int star=1;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
		printf(" "); //space
			
		}
		for(k=1;k<=star;k++)
		{
		printf("*");
		}
		star=star+2;
		printf(" \n");
	}
	
	
}
