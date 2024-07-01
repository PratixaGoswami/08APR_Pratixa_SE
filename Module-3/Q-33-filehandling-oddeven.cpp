//WAP to read number from file file and write even odd to separate file
//WAP to read number from file and write  even odd to separate file
#include<stdio.h>
main()
{
	FILE *fd,*fo,*fe;
	int a;
	fd=fopen("numbers.txt","r");
	fo=fopen("odd.txt","w");
	fe=fopen("even.txt","w");
	while(fscanf(fd,"%d",&a)!=EOF)
	{
		if(a%2==0)
		{
			fprintf(fe,"%d\n",a);
			
		}
		else
		{
			fprintf(fo,"%d\n",a);
		}
	}
	fclose(fd);
	fclose(fo);
	fclose(fe);
	

}
