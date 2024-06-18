#include<iostream>
using namespace std;
class person 
{
public:
    string name;
    int age;
    
    void getdata()
	 {
        cout<<"Enter your name: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter your age: ";
        cin>>age;
    }
    
    void printdata() 
	{
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
};

class student 
{
    float per;
public:
    void percentage()
	{
        cout<<"Enter Percentage: ";
        cin>>per;
    }
    
    void printper() 
	{
        cout<<"\nPercentage: " <<per<< "%";
    }
};

class teacher 
{
    int salary;
public:
    void teachersalary() 
	{
        cout << "Enter Salary: ";
        cin >> salary;
    }
    
    void printsalary() 
	{
        cout << "\nSalary: "<<salary;
    }
};

class school: public person, public student, public teacher 
{
public:
    void studentgetdata() 
	{
        person::getdata();
        percentage();
    }
    
    void teachergetdata() 
	{
        person::getdata();
        teachersalary();
    }
    
    void printstudentdata() 
	{
        person::printdata();
        printper();
    }
    
    void printteacherdata() 
	{
        person::printdata();
        printsalary();
    }
};

main()
{
    school st;
    school tc;
    
    cout<<"Enter Student details: \n";
    st.studentgetdata();
    
    cout<<"\nEnter Teacher details:\n";
    tc.teachergetdata();
    
    cout<<"\nStudent details:\n";
    st.printstudentdata();

    cout<<"\nTeacher details:\n";
    tc.printteacherdata();
    
    
}



