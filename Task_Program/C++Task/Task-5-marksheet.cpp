#include<iostream>
using namespace std;
main()
{
	float python,java,php,AI,total,per;
	cout<<"Enter mark of python:";
	cin>>python;
	cout<<"Enter mark of java:";
	cin>>java;
	cout<<"Enter mark of php:";
	cin>>php;
	cout<<"Enter mark of AI:";
	cin>>AI;
	total=python+java+php+AI;
	cout<<"\nTotal marks is:"<<total;
	per=total/4;
	cout<<"\npercentage is:"<<per;
	
	if(per>=80)
	{
		cout<<"\nFirst class";
		
	}
	else if(per>=60)
	{
		cout<<"\nsecond class";
		
	}
	else if(per>=40)
	{
		cout<<"\ncongratulation you have pass!";
		
	}
	else
	{
		cout<<"\nsorry you have Fail";
	}
}
