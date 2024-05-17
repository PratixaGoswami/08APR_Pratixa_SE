 //WAP Monday to Sunday using switch case 

#include<stdio.h>
main()
{
	int days;
	printf("Enter a number(1-7)");
	scanf("%d",&days);
	
	switch(days)
	{
		case 1:
			printf("sunday\n");
			break;
		case 2:
		    printf("Monday\n");
			break;
		case 3:
		    printf("Tuesday\n");
			break;
		case 4:
		    printf("Wednesday\n");
			break;
		case 5:
		    printf("Thursday\n");
			break;
		case 6:
		    printf("Friday\n");
			break;
		case 7:
		    printf("Saturday\n");
			break;

		default:
		printf("Holiday\n");
		break;		
}
	
}
