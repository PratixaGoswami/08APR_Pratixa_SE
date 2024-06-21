#include<iostream>
using namespace std;
struct marksheet
{
	int mark;
	string sub;
	
	
}st[5];
main()
{
	int i,total,per;
	for(i=0;i<4;i++)
	
	{
		cout<<"Enter Subject:";
		cin>>st[i].sub;
		cout<<"Enter Marks:";
		cin>>st[i].mark;
		total+=st[i].mark;
		

	
	}

	cout<<"Total is:"<<total;
	
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
	

