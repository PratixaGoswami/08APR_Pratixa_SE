/*  Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) */
#include<iostream>
using namespace std;
class cricketer
{
	public:
	char name[20];
	int age;
	void getdata()
	{
		cout<<"Enter Name: ";
		gets(name);
		cout<<"Enter Age:";
		cin>>age;
		
	}
};
class batsman :public cricketer
{
	public:
	int totalruns,bestperformance;
	float averageruns;
	void input_data()
	{
		cout<<"Enter Total Runs: ";
		cin>>totalruns;
		cout<<"Enter Best performance: ";
		cin>>bestperformance;
		
	}
	void calculate_average_runs()
	{
		averageruns=totalruns/5.0; 
	}
	void printdata()
	{
		cout<<"\nName: " <<name;
		cout<<"\nAge: "<<age;
		cout<<"\nTotal Runs: "<<totalruns;
		cout<<"\nAverage Runs: "<<averageruns;
		cout<<"\nBest peformance: "<<bestperformance;
	}
	
	
};
main()
{
	batsman bt;
	bt.getdata();
	bt.input_data();
	bt.calculate_average_runs();
	bt.printdata();
	
	
}

