#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Event
{
public:
	string ename,cname;
    int gno;
    double minutes; 
	

    void getdata() 
	{
        cout<<"************ Event Management System *************\n";
        cout<<"Enter name of the Event: ";
        cin>>ename;
        cout<<"Enter the customer's first and last name: ";
        cin>>cname;
        cout<<"Enter the number of guests: ";
        cin>>gno;
        cout<<"Enter the number of minutes in the event: ";
        cin>>minutes;
        cout<<"\n\n";
    }
};

class Estimate : public Event 
{
public:
    int server;
    void printdata() 
	{
        cout << "************** Event Estimate for: "<<cname<< " ***************\n";
        server = gno / 20;
        cout << "\nNumber of servers: "<<server;
    }
};

class Cost : public Estimate 
{
public:
    double cph; //costperhour
    double cpm; //costperminute
    double cod; //costofdinner
    double cfs; //costforoneserver
    double tfc; //totalfoodcost
    double acost; //averagecost
    double tcost; //totalcost
    double damount; //depositamount;
    
    
    Cost() 
	{
		cph=18.50;
		cpm=0.40;
		cod=20.70;
	}

    void servercost() 
	{
        double cost1 = (minutes / 60)*cph;
        double cost2 = fmod(minutes, 60)*cpm;
        cfs = cost1 + cost2;
        cout<<"\nThe cost for server: "<<cfs;
    }
    void foodcost()
    {
    	tfc= gno * cod;
    	cout<<"\nthe cost for food is: "<<tfc;
	}
	void averagecost()
	{
		acost = tfc/gno;
		cout<<"\nAveragecost cost per person: "<<acost;
	}
	void totalcost()
	{
		tcost = tfc + (cfs * server);
		cout<<"\nTotal cost is: "<<tcost;
	}
	void deposit()
	{
		cout<<"\nPlease Deposit 25% deposit to reserve the event";
	
         damount = tcost *0.25;
		 cout<<"\nThe deposit needed is: "<<damount;
	}
};

main()
 {
    Cost c;
    c.getdata();
    c.printdata();
    c.servercost();
    c.foodcost();
    c.averagecost();
    c.totalcost();
    c.deposit();
    
}
