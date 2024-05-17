/*WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) */

#include<stdio.h>
main()
{
	char o;
	float num1,num2,result;

	printf("Enter an operator (+,-,*,/):");
	scanf("%c",&o);
	
	printf("enter two number:");
	scanf("%f %f",&num1,&num2);
	
	
	switch(o)
	{
		case '+':
			result=num1+num2;
			break;
		case '-':
		    result=num1-num2;
			break;
		case '*':
		    result=num1*num2;
			break;
		case '/':
		    result=num1/num2;
			break;
		default:
		    printf("Error");
    }
    printf("Result:%f",result);
    

		
		
		
		
			
			
	
	
	
	
}
