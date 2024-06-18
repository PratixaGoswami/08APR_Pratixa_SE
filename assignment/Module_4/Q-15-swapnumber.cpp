/* Write a program to swap the two numbers using friend function without 
using third variable */
#include<iostream>
using namespace std;
class swapnumber
{
	private:
	int x;
	int y;
	public:
	swapnumber()
	{ 
	  cout<<"Enter two number: ";
	  cin>>x>>y;
	  cout<<"\nBefore swaping x is: "<<x <<"and y is:"<<y;
	  
		
	}
	friend void number(swapnumber &s)
	{
		s.x=s.x+s.y;
		s.y=s.x-s.y;
		s.x=s.x-s.y;
		cout<<"\nAfter swaping X is:"<<s.x <<" and y is :" <<s.y;
		
	}
	
};
main()
{
	swapnumber p;
	number(p);
	
}
