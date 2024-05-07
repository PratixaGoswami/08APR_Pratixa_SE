#include<stdio.h>
main()
{
	int number1,number2;
	printf("Enter Number1:");
	scanf("%d",&number1);
	printf("Enter Number2:");
	scanf("%d",&number2);
	
	if(number1!=0 && number2!=0)
	{
		if(number1>number2)
		{
			printf("sum:%d\n",number1+number2);
			
		}
		else{
			printf("multiplication:%d\n",number1*number2);
		}
	}
	else
	{
		printf("Invalid Number");
	}

}
