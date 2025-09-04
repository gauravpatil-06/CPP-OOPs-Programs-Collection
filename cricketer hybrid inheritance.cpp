#include<iostream>
using namespace std;
class cricketer
{
	protected:
		char name[20],country[20];
		int age;
		int runs;
		int wicket;
	

};
class bowler:virtual public cricketer
{
	public:
		void accept()
		{
			cout<<"\nEnter Bowler Name:";
			cin>>name;
			cout<<"\nEnter Bowler Age:";
			cin>>age;			
			cout<<"\nEnter Bowler WiCket:";
			cin>>wicket;
			cout<<"\nEnter Bowler Country:";
			cin>>country;
		}
		void display()
		{
			cout<<"\nBowler Name   :"<<name;		
			cout<<"\nBowler Age    :"<<age;
			cout<<"\nBowler Wickets :"<<wicket;
			cout<<"\nBowler Country:"<<country;
			cout<<"\n";
		}
};
class batsman:virtual public cricketer
{
	public:
		void accept1()
		{
			cout<<"\nEnter Batsman Name:";
			cin>>name;
			cout<<"\nEnter Batsman Age:";
			cin>>age;
			cout<<"\nEnter Batsman Country:";
			cin>>country;			
			cout<<"\nEnter Batsman Runs:";
			cin>>runs;
		}
		void display1()
		{
			cout<<"\nBatsman Name   :"<<name  ;
			cout<<"\nBatsman Age    :"<<age;			
			cout<<"\nBatsman Runs   :"<<runs;
			cout<<"\nBatsman Country:"<<country;
			cout<<"\n";
		}

};
class allrounder:public bowler,public batsman
{
	public:
		void accept2()
		{
			cout<<"\nEnter Allrounder Name:";
			cin>>name;
			cout<<"\nEnter Allrounder Age:";
			cin>>age;
		}
		void display2()
		{
			cout<<"\nAllrounder Name:"<<name;
			cout<<"\nAllrounder Age:"<<age;
			cout<<"\n";
			bowler::accept();
			bowler::display();
			batsman::accept1();
			batsman::display1();			
		}


};
int main()
{
	allrounder a;
	a.accept2();
	a.display2();
}
