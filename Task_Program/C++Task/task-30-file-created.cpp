#include<iostream>
#include<fstream>
using namespace std;
main()
{
	
	ofstream myfile("hello.txt",ios::app);
	int id;
	string name;
	cout<<"Enter ID:";
	cin>>id;
	myfile<<"\nId: "<<id;
	cout<<"\nEnter a name: ";
	cin>>name;
	myfile<<"\nname: "<<name;
	
	myfile.close();
	cout<<"\n	close successfully.";
}
