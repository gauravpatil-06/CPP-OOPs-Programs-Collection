#include<iostream>
using namespace std ;
class Employee
{
    protected:
           int emp_no;
           char emp_name[20];
           char emp_designation[20];
   
};
class salary:public Employee
{
    protected:
           float basic_salary,hra,da,gross_salary;
    public:
    
        void accept()
        {
           cout<<"\nEnter employee  no:";
            cin>>emp_no;
            cout<<"\nEnter employee name:";
            cin>>emp_name;
            cout<<"\nEnter employee designation:";
            cin>>emp_designation;
		   cout<<"\nEnter basic salary:";
           cin>>basic_salary;
        }
        void calculte()
        {
            da=((basic_salary/100)*25);
            hra=((basic_salary/100)*30);
            gross_salary=(basic_salary+hra+da);
        }
        void display()
        {
         cout<<"\nEmployee no:"<<emp_no;
    	cout<<"\nEmployee name:"<<emp_name;
        cout<<"\nEmployee designation:"<<emp_designation;
		 cout<<"\nBasic salray:"<<basic_salary;
         cout<<"\nHra:"<<hra;
         cout<<"\nDA:"<<da;
         cout<<"\ngross salary:"<<gross_salary;
        }
};
int main()
{
    salary s;
    s.accept();
    s.calculte();
    s.display();
    return 0;
}
