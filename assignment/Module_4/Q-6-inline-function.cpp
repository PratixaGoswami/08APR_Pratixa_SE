/* Write a program to find the multiplication values and the cubic values using 
inline function*/
#include<iostream>
using namespace std;
class operation
{
	public:
	int a,b;
	void getvalue()
	{
		cout<<"Enter value of A: ";
		cin>>a;
		cout<<"Enter value of B: ";
		cin>>b;
	}
		void multiplication();
		void cubic();
		
	
};
inline void operation ::multiplication()
{
	
	cout<<"\nMultiplication of "<< a <<" and "<< b <<" is: "<<a*b;
	
}
inline void operation::cubic()
{
	cout<<"\nCubic value of "<<a<<" is : "<<a*a*a;
	cout <<"\nCubic value of "<<b<<" is : "<<b*b*b;
}

main()
{
  operation op;
  op.getvalue();
  op.multiplication();
  op.cubic();
  	
}
