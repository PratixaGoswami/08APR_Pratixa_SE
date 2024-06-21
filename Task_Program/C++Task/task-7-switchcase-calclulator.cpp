#include<iostream>
using namespace std;
main()
{
	int a,b,choice,result;
	cout<<"enter value of A:";
	cin>>a;
	cout<<"Enter value of B:";
	cin>>b;
	 
	cout<<"\n1.Addition";
	cout<<"\n2.Subtraction:";
	cout<<"\n3.multiplication:";
	cout<<"\n4.Division:";
	
	cout<<"\nEnter you Choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			result=a+b;
			cout<<result;
			break;
		
			
		case 2:
			result=a-b;
			cout<<result;
			break;
		
		case 3:
			result=a*b;
			cout<<result;
			break;
		case 4:
			result=a/b;
			cout<<result;
			break;
			
	   default:
	   	    cout<<"Invalid input";
			
				
			
				
			
			
			
			
	}
	
	
	
}
