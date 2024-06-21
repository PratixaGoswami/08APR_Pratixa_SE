#include<iostream>
#include<fstream>
using namespace std;
main()
{
	
	ofstream myfile("hello.txt",ios::app);
	int id,n,i;
	string name;
	
	cout<<"Enter total student:";
	cin>>n;
	myfile<<"\n Enter student data:"<<n;
	for(i=0;i<n;i++)
	{
	cout<<"Enter ID:";
	cin>>id;
	myfile<<"\nId: "<<id;
	cout<<"\nEnter a name: ";
	cin>>name;
	myfile<<"\nname: "<<name;

	}

}
