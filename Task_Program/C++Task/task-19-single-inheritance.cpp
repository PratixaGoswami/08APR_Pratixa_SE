#include<iostream>
using namespace std;
class studinfo
{
	public:
		int id;
		string name;
		
		void getdata()
		{
			cout<<"Enter ID:";
			cin>>id;
			cout<<"Enter Name:";
			cin>>name;
			
		}
};
class result:public studinfo
{
	public:
		void printdata()
		{
			cout<<"\nID:"<<id;
			cout<<"\nName:"<<name;
		}
};
main()
{
	result st;
	st.getdata();
	st.printdata();
}
