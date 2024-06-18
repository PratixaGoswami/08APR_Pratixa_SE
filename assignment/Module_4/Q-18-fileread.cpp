//WAP to read file contents and  display on console.
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream myfile("Hello.txt",ios::app);

    string line;
    while (getline(myfile, line))
	{
        cout<<line<<"\n";
    }

    
	
	
}
