#include<stdio.h>
main()
{
	float python,java,php,toc,ai,Total,per;
    printf("Enter mark of python:");
    scanf("%f",&python);
     printf("Enter mark of Java:");
    scanf("%f",&java);
     printf("Enter mark of PHP:");
    scanf("%f",&php);
     printf("Enter mark of TOC:");
    scanf("%f",&toc);
     printf("Enter mark of AI:");
    scanf("%f",&ai);
    if(python>=40 && java>=40 && php>=40 && toc>=40 && ai>=40)
    {
	
    Total=python+java+php+toc+ai;
    printf("\nTotal Mark is:%f",Total);
    per=Total/5;
    printf("\npercentage is:%f",per);
	
    
   if(per>=80)
    {
    	printf("\nFirst class");

	}
	else if(per>=60)
	{
		printf("\nsecond class:");
		
	}
	else if(per>=40);
    {
		printf("\nCongratulation! you have Pass");
	}
}
    else 
	{  
	    printf("\n Sorry you have fail..");
	}
}

