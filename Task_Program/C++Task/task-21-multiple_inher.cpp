#include<iostream>
using namespace std;
class pinal
{
	public:
		int pid;
		string psub;
		void p_getdata()
		{
			cout<<"Enter Pinal's ID:";
			cin>>pid;
			cout<<"Enter Pinal's Subject:";
			cin>>psub;
			
		}
};
class bhavika
{
		public:
		int bid;
		string bsub;
		void b_getdata()
		{
			cout<<"Enter Bhavika's ID:";
			cin>>bid;
			cout<<"Enter Bhavika's Subject:";
			cin>>bsub;
			
		}
};
class harvi
{
	public:
		int hid;
		string hsub;
		void h_getdata()
		{
			cout<<"Enter Harvi's ID:";
			cin>>hid;
			cout<<"Enter Harvi's Subject:";
			cin>>hsub;
			
		}
	
};
class studentdata:public pinal,public bhavika,public harvi
{
  public:
  void printdata()
  {
  	cout<<"\n--------------Pinal data----------------";
  	cout<<"\nPinal's Id:"<<pid;
  	cout<<"\nPinal's subject:"<<psub;
  	
  	cout<<"\n--------------bhavika data----------------";
  	cout<<"\nbhavika's Id:"<<bid;
  	cout<<"\nbhavika's subject:"<<bsub;
  	
  	cout<<"\n--------------harvi data----------------";
  	cout<<"\nharvi's Id:"<<hid;
  	cout<<"\nharvi's subject:"<<hsub;
  	
	  }	
};
main()
{
	studentdata st;
	st.p_getdata();
	st.b_getdata();
	st.h_getdata();
	st.printdata();
}
