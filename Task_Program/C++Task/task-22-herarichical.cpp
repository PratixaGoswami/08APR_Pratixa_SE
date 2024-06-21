#include<iostream>
using namespace std;
class faculty
{
	public:
	string name = "pinal";
	void getdata()
	{
		cout<<"Name of faculty:"<<name;
	
		
	}
};
class ComputerEng:public faculty
{
	public:
	
	void CESUB()
	{
		cout<<"\npython:"<<name;
		
	}
};
class MechanicalEng:public faculty
{
	public:
	
	void MESUB()
	{
		cout<<"\nMaths:"<<name;
	}
};
class ElectricalEng:public faculty
{
	public:
	
	void ELSUB()
	{
		cout<<"\nEC:"<<name;
	}
};
main()
{
        faculty fc;
        ComputerEng CE;
        MechanicalEng ME;
        ElectricalEng EE;
        fc.getdata();
        CE.CESUB();
        ME.MESUB();
        EE.ELSUB();
        
}
