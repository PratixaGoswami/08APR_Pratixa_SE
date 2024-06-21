#include<iostream>
using namespace std;
class master
{
	private:
		int id;
		string name;
		
		public:
			master()//constructer
			{
				id=101;
				name="pratixa";
				
			}
		friend void getdata(master &ms)//friend function
		{
			cout<<"\nID: "<<ms.id;
			cout<<"\nName: "<<ms.name;
			
			}	
};
main()
{
	master m;
	getdata(m);
	
}
