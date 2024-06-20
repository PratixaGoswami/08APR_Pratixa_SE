//WAP to read name and marks of n number of student and store them in a file
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream myfile("student.txt",ios::app);
	if(myfile.is_open())
    {
	   int n,i,marks;
	   string name;
	   cout<<"enter number of student";
	   cin>>n;
	   for(i=0;i<n;i++)
	   {
	   	cout<<"Enter name of student "<<i+1<<":";
	   	cin>>name;
	   	cout<<"enter marks of student "<<i+1<<":";
	   	cin>>marks;
	   	myfile<<name <<" "<<marks<<"\n";
	   	
	   	
	   }
	   myfile.close();
	}
	else
	{
		cout<<"\nunable to open file";
		}	

}
