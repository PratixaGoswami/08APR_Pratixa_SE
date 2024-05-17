#include<stdio.h>
main()
{
	int number[10],i,sum_even,sum_odd;
	
	printf("enter number:");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("Even number are:");

	
	
	if(number[i] % 2==0)
	{
		printf("%d\n",number[i]);
	}

    printf("Even number are:");
    
    {
	if(number[i] % 2!=0)
	
		printf("%d\n",number[i]);
		sum_even+=number[i];
	
}
    printf("Sum of Even number:%d",sum_even);
}
