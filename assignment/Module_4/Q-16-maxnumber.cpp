/* Write a program to find the max number from given two numbers using 
friend function*/
#include<iostream>
using namespace std;
class maxnumber
{
    private:
	int x,y;
	public:
	maxnumber()
	{
		cout<<"Enter number of x: ";
		cin>>x;
		cout<<"Enter number of y: ";
		cin>>y;
		
		}
		friend void max(maxnumber &m)
		{
				if(m.x>m.y)
				{
					cout<<"X is max :"<<m.x;
				
				}
				else
				{
					cout<<"y is max :"<<m.y;
				}
			}	
};
main()
{
	maxnumber n;
	max(n);
}
