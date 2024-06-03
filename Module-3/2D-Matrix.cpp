#include<stdio.h>
main()
{
	int a[2][2],b[2][2],i,j,add[2][2],sub[2][2],mul[2][2];
	printf("Enter value of 1st matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter value of 2nd matrix:");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nfirst matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nSecond matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
		
	}
	printf("The sum of two matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",add[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
		
	}
	printf("The sub of two matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mul[i][j]=a[i][j]*b[i][j];
		}
		
	}
	printf("The mul of two matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}

	
	
	
}
