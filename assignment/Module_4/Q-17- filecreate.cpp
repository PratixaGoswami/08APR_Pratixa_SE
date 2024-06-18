//WAP to create a file and write contents, save and close the file.
#include<iostream>
#include<fstream>
using namespace std;

main()
{
  ofstream myfile("Hello.txt",ios::app);
  int id;
  string name;
  cout<<"Id :";
  cin>>id;
  myfile<<"\nId: "<<id;
  cout<<"name:";
  cin>>name;
  myfile<<"\nName: "<<name;
  
	
}
