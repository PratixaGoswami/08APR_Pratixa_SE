#include<iostream>
using namespace std;
struct studinfo
{
	int id;
	string name;
}st[5];
main()
{
	int n,i;
	cout<<"Enter number of student:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter ID:";
		cin>>st[i].id;
		cout<<"Enter Name:";
		cin>>st[i].name;
		
	}
	for(i=0;i<n;i++)
	{
		cout<<"\nId:"<<st[i].id;
		cout<<"\nName:"<<st[i].name;
		
	}
}



