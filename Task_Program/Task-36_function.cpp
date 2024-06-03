#include<stdio.h>
void circle()
{
	float pi=3.14;
	int radius;
	printf("Enter the radius of circle");
	scanf("%d",&radius);
	printf("the area of circle:%f",3.14*radius*radius);

	
}
void square()
{
	
	int side;
	printf ("enter the side of sqaure:");
	scanf("%d",&side);
	printf("Area of Sqaure:%d",side*side);

}
void rectangle()
{
	int length,width;
	printf("enter the length of rectangle:");
	scanf("%d",&length);
	printf("enter the width of rectangle:");
	scanf("%d",&width);
	printf("area of rectangle:%d",length*width);
}
main()
{
	int a;
	
    printf("Enter number:");
    scanf("%d",&a);
    
    switch(a)
    {
    	case 1:
    	circle();
    	break;
    	
    	case 2:
    	square();
    	break;
    	
    	case 3:
    	rectangle();
		break;	
	}
}
