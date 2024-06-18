// Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;
class concatenate{
	public:
		void name(string fnm,string lnm)
		{
		   cout<<"first name: "<<fnm;
		   cout<<"\nlast name:"<<lnm;
		   cout<<"\nFullname: "<<fnm+lnm;
		   
			
		}
};
main()
{
	concatenate con;
	con.name("pratixa","Goswami");
}
