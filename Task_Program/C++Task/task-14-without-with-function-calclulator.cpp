#include<iostream>
using namespace std;
void sum(int a,int b)
{
	cout<<"\nsum:"<<a+b;
}
void sub(int a,int b)
	{
	 cout<<"\nsub:"<<a-b;
		
	}
void mul(int a,int b)
{
	cout<<"\nMul:"<<a*b;	
}
main()
{
	int n1,n2;
	cout<<"Enter value of A:";
	cin>>n1;
	cout<<"Enter value of B:";
	cin>>n2;
	sum(n1,n2);
	sub(n1,n2);
	mul(n1,n2);
}
