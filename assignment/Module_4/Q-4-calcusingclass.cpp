 // WAP to create simple calculator using class 
#include<iostream>
using namespace std;
class calc
{
	public:
		int a,b;
		void getvalue()
		{
			cout<<"Enter value of A:";
			cin>>a;
			cout<<"Enter value of B:";
			cin>>b;
			
		}
		void sum()
		{
			cout<<"\nSum :"<<a+b;
			
		}
		void sub()
		{
			cout<<"\nsub :"<<a-b;
		}
		void mul()
		{
			cout<<"\nMul :"<<a*b;
		}

};

main()
{
	calc cl;
	cl.getvalue();
	cl.sum();
	cl.sub();
	cl.mul();
	
}
