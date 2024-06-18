/* Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading*/
#include<iostream>
using namespace std;
const float pi=3.14;
float area(	float length,float breadth)	
{
	return length*breadth;
}
float area(float base, float height,bool isTriangle)
{
	return 0.5*base*height;
}
float area(float radius)
{
	return pi*radius*radius;
	
}
main()
{
	float length,breadth,base,height,radius;
	cout<<"Enter length and breadth of the rectangle: ";
	cin>>length>>breadth;
	cout<<"\nthe area of rectangle is : "<<area(length,breadth);
	cout<<"\nenter base and height of the triange: ";
	cin>>base>>height;
	cout<<"\nthe are of triangle is: "<<area(base,height,true);
	cout<<"\nEnter the radius of circle: ";
	cin>>radius;
	cout<<"\nthe area of circle is: "<<area(radius);

	
	
}
