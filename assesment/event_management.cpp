#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// Base class to store event details
class Event
{
public:
	string eventname,cname;
    int guest_no;
    double minutes; 
	

    void getdata() 
	{
        cout<<"************ Event Management System *************\n";
        cout<<"Enter name of the Event: ";
        cin>>eventname;
         cin.ignore();//Ignore the newline left in the buffer by cin
        cout<<"Enter the customer's first and last name: ";
        getline(cin,cname);//Use getline to read the full name
        cout<<"Enter the number of guests: ";
        cin>>guest_no;
        cout<<"Enter the number of minutes in the event: ";
        cin>>minutes;
        cout<<"\n\n";
    }
};
// Derived class to estimate the number of servers needed
class Estimate : public Event {
public:
    int server;
    void printdata() {
        cout << "************** Event Estimate for: " <<cname << " ***************\n";
        server = guest_no / 20;
        cout << "\nNumber of servers: "<<server;
    }
};

// Derived class to calculate costs associated with the event
class Cost : public Estimate {
public:
    double CostPerHour;
    double CostPerMinute;
    double CostOfDinner;
    double costforoneserver;
    double totalfoodcost;
    double acost;
    double tcost;
    double depositamount;
    
    // Constructor to initialize constant costs
    Cost() : CostPerHour(18.50), CostPerMinute(0.40), CostOfDinner(20.70){}

    void servercost() 
	{
        double cost1 = (minutes / 60)*CostPerHour;
        double cost2 = fmod(minutes, 60)*CostPerMinute;
        costforoneserver = cost1 + cost2;
        cout<<"\nThe cost for server: "<<costforoneserver;
    }
    void foodcost()
    {
    	totalfoodcost = guest_no * CostOfDinner;
    	cout<<"\nthe cost for food is: "<<totalfoodcost;
	}
	void averagecost()
	{
		acost = totalfoodcost/guest_no;
		cout<<"\nAveragecost cost per person: "<<acost;
	}
	void totalcost()
	{
		tcost = totalfoodcost + (costforoneserver * server);
		cout<<"\nTotal cost is: "<<tcost;
	}
	void deposit()
	{
		cout<<"\nPlease Deposit 25% deposit to reserve the event";
	
         depositamount = tcost *0.25;
		 cout<<"\nThe deposit needed is: "<<depositamount;
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
