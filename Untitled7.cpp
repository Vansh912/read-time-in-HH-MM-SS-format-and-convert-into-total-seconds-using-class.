#include<iostream>


using namespace std;

class time
{
	public:
		int hrs,mins,sec;
		

	
};
class cla : public time
{
	public:
		
		int total=0;
		
		
	
};

int main()
{
	time myobj;
	cla obj;
	cout<<"hours?\n";
	cin>>myobj.hrs;
	cout<<"minutes?\n";
	cin>>myobj.mins;
	cout<<"seconds?\n";
	cin>>myobj.sec;
	
	cout<<"The Time is = "<<myobj.hrs<<":"<<myobj.mins<<":"<<myobj.sec<<"\t";
	
	obj.total = myobj.hrs*3600 + myobj.mins*60 + myobj.sec;
	
	cout<<"\nthe total time is = "<<obj.total;
	
	
}

