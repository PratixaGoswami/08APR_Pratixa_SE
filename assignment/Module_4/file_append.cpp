//WAP to append content to a file
#include <iostream>
#include <fstream>
using namespace std;

main() 
{
    ofstream myfile("myfile.txt", ios::app);

    if (myfile.is_open())
	{
        myfile << "\nThis is appended content";
        myfile.close();
        cout <<"Content appended successfully";
    } 
	else
	{
        cout <<"Unable to open file";
    }


}
