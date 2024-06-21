#include<iostream>
using namespace std;
class student
{
	public:
		void getdata(int id)
		{
			cout<<"id:"<<id;
			
		}
		void getdata(string name)
		{
			cout<<"\nName:"<<name;
		}
};
main()
{
	student st;
	st.getdata(101);
	st.getdata("pratixa");
}
