#include<iostream>
using namespace std;
main()
{
	int i=1;
	
	 loop:
	cout<<i<<"\n";
	i++;
	if(i<=10)
	{
		goto loop;
	 } 
}
