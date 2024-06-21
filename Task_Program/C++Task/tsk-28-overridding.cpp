#include<iostream>
using namespace std;
class master
{
	public:
		void getdata(int id,string name)//original
		{
			cout<<"\nid:"<<id;
			cout<<"\nname: "<<name;
			
		}
};
class page1:public master
{
	public:
		void getdata(int id,string name)//xerox
		{
			cout<<"\nPage1 ID: "<<id;
			cout<<"\nPage1 Name: "<<name;
			
		}
};
class page2:public master
{
	public:
		void getdata(int id,string name)//xerox
		{
			cout<<"\nPage2 ID: "<<id;
			cout<<"\nPage2 Name: "<<name;
			
		}
};
main()
{
	page1 p1;
	page2 p2;
	p1.getdata(1,"pratixa");
	p2.getdata(2,"Milan");
}
