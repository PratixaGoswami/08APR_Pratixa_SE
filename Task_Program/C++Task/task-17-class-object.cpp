#include<iostream>
using namespace  std;
class studinfo
{
	int id;
	string name;
	
	public:
		void getdata()
		{
			
			cout<<"Enter ID:";
			cin>>id;
			cout<<"Enter Name:";
			cin>>name;
			cout<<"\nID:"<<id;
			cout<<"\nName:"<<name;
			
		
		}
	
};
main()
{
	studinfo st;
	st.getdata();
}
