/* Write a program of Addition, Subtraction, Division, Multiplication using 
constructor*/
#include<iostream>
using namespace std;
class math
{
	 public:
	 	math(int a,int b)
	 	{
	 		cout<<"\nValue of A:" <<a;
	 		cout<<"\nValue of B:" <<b;
	 		cout<<"\nAdd : "<<a+b;
	 		cout<<"\nSub : "<<a-b;
	 		cout<<"\nMul : "<<a*b;
	 		cout<<"\nDiv : "<<a/b;
	 		
	  	 }
	  	 
};
main()
{
	math m(10,5);
	
}
