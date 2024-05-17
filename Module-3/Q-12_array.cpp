 WAP to take 10 no. Input from user and find out … 
 How many Even numbers are there 
 How many odd numbers are there 
 Sum of even numbers 
 Sum of odd numbers 


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
	for(i=1;i<=10;i++)
	{
	
	if(number[i] % 2==0)
	{
		printf("%d\n",number[i]);
		sum_even+=number[i];
	}
}
    printf("Odd number are:");
    for(i=1;i<=10;i++)
    {
	if(number[i] % 2!=0)
	{
		printf("%d\n",number[i]);
		sum_odd+=number[i];
	}
}
    printf("Sum of Even number:%d\n",sum_even);
    printf("Sum of Odd number:%d\n",sum_odd);
}

	
