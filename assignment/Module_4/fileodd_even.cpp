//WAP to read numbers from a file and write even odd to separate file.
#include <iostream>
#include <fstream>
using namespace std;

main()
{
    ifstream myfile("numbers.txt");
    ofstream evenfile("even.txt");
    ofstream oddfile("odd.txt");

   if (myfile.is_open() && evenfile.is_open() && oddfile.is_open()) 
   {
        int n;
        while (myfile>>n) 
		{
            if (n%2==0) 
			{
                evenFile<<n<<"\n";
            } 
			else
			{
                oddFile<<n<<"\n";
            }
        }
        myfile.close();
        evenFile.close();
        oddFile.close();
        cout << "\nNumbers separated into even.txt and odd.txt";
    } 
	else
	{
        cout << "\nUnable to open files.";
    }

}
