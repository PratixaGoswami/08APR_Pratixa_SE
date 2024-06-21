#include<iostream>
using namespace std;
main()
{
	int id[5],n,i;
	string name[5];
	
	cout<<"Enter number of student:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter your id:";
		cin>>id[i];
		cout<<"Enter your Name:";
		cin>>name[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"ID["<<i<<"]="<<id[i]<<"\n";
		cout<<"Name["<<i<<"]="<<name[i]<<"\n";
	}
}
