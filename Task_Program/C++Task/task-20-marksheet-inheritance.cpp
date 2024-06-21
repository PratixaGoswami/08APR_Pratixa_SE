#include<iostream>
using namespace std;
class exam
{
	public:
		int s1,s2,s3,s4,total,per;
		void getdata()
		{
		
		cout<<"Enter Mark of subject 1:";
		cin>>s1;
		cout<<"Enter Mark of subject 2:";
		cin>>s2;
		cout<<"Enter Mark of subject 3:";
		cin>>s3;
		cout<<"Enter Mark of subject 4:";
		cin>>s4;
	}
		
};
class result:public exam
{
	public:
	void resultdata()
	{
	cout<<"\nsubject1:"<<s1;
	cout<<"\nsubject2:"<<s2;
	cout<<"\nsubject3:"<<s3;
	cout<<"\nsubject4:"<<s4;
	total=s1+s2+s3+s4;
	per=total/4;
	cout<<"\nTotal:"<<total;
	cout<<"\nper:"<<per;
		
	}

};
main()
{
	result st;
	st.getdata();
	st.resultdata();
}

