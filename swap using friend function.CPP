#include<iostream>
using namespace std;
class Variable
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"\nEnter value of a & b:";
			cin>>a>>b;
		}
		friend void swap(Variable m);
};
void swap(Variable m)
{
	int temp;
	cout<<"\nValue of a & b before swapping\na="<<m.a<<"\tb="<<m.b;
	temp=m.a;
	m.a=m.b;
	m.b=temp;
	cout<<"\nValue of a & b after swapping\na="<<m.a<<"\tb="<<m.b;

}
int main()
{
	Variable v;
	v.getdata();
	swap(v);
}
