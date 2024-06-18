/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class student
{
	
	public:
		int rno;
	void rollnumber()
	{
		
		
	  cout<<"Roll Number: ";
	  cin>>rno;
	  
	
	  
	}
};
class test:public student
{
	
	public:
    int m1,m2;
	void studentmarks()
	{
	
		cout<<" mark 1: ";
		cin>>m1;
		cout<<"mark 2: ";
		cin>>m2;
		
	}
};
class result:public test
{
	public:
	int t;
	void total()
	{
		cout<<"Total is: "<<m1+m2;
	}

};


main()
{
	result r;
	r.rollnumber();
	r.studentmarks();
	r.total();
}

