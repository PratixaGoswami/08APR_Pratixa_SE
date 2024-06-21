#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream myfile("hello.txt");
	string str;
	while(getline(myfile,str))
	{
		cout<<str<<"\n";
		
	}
}
