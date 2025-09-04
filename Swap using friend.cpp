#include<iostream>
using namespace std;
class sample
{
	public:
		int a,b;
		sample(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"\na="<<a<<"\tb="<<b;
		}
		friend void swap(sample &m)
		{
		 int temp;
		 temp=m.a;
		 m.a=m.b;
		 m.b=temp;	
     	} 
};
int main()
{
	sample s(10,20);
	cout<<"\nBefore swapping";
	s.display();
	swap(s);
	cout<<"\nAfter swapping";
	s.display();
}
