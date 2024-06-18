/* Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/
#include<iostream>
using namespace std;
class mathoperation
{

public:

	int sum(int a,int b)
{
	return a+b;
}
double sum(double a,double b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
	
}
double sub(double a,double b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
double mul(double a,double b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
double div(double a,double b)
{
	return a/b;
}

	
};
main()
{
	int a=10,b=5;
	double x=10.5,y=5.5;
	mathoperation math;
	cout<<"\nSum (int) :"<<math.sum(a,b);
	cout<<"\nsub (int) :"<<math.sub(a,b);
	cout<<"\nmul (int):"<<math.mul(a,b);
	cout<<"\ndiv (int) :"<<math.div(a,b);
	
	cout<<"\nSum (double):"<<math.sum(x,y);
	cout<<"\nsub (double):"<<math.sub(x,y);
	cout<<"\nmul (double):"<<math.mul(x,y);
	cout<<"\ndiv (double):"<<math.div(x,y);

}
   

