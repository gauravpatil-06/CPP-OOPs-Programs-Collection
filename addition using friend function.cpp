#include<iostream>
using namespace std;
class Distance
{
	public:
		int meter;
		void accept()
		{
			cout<<"\nEnter distance in meter:";
			cin>>meter;
		}
		friend void add(Distance m,Distance n)
		{
		 int result;
		 result=m.meter+n.meter;
		 cout<<"\nAddition of two metre:"<<result;	
     	} 
};
int main()
{
	Distance d1,d2;
	d1.accept();
	d2.accept();
	add(d1,d2);
}
