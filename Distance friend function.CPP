#include<iostream>
using namespace std;
class Distance
{
	int meter;
	public:
		void getdata()
		{
			cout<<"\nEnter Distance in Meter:";
			cin>>meter;
		}
		friend void add(Distance m,Distance n);
};
void add(Distance m,Distance n)
{
	int addi;
	addi=m.meter+n.meter;
	cout<<"\nTotal Distance:"<<addi;
}
int main()
{
	Distance d1,d2;
	d1.getdata();
	d2.getdata();
	add(d1,d2);
}
