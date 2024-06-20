//WAP compare two file
#include<iostream>
#include<fstream>
using namespace std;
main()
{

    ifstream file1("file1.txt");
    ifstream file2("file2.txt");

    if (file1.is_open() && file2.is_open()) 
	{
        string line1,line2;
        bool filesEqual=true;

        while (getline(file1, line1) && getline(file2, line2)) 
		{
            if (line1!=line2) 
			{
                filesEqual = false;
                break;
            }
        }

        file1.close();
        file2.close();

        if (filesEqual) 
		{
            cout << "Files are equal";
        } 
		else 
		{
            cout << "Files are not equal";
        }
    } 
	else 
	{
        cout << "Unable to open files";
    }
}
