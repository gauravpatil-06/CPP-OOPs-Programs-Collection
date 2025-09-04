#include<iostream>
using namespace std;

class Employee
{
protected:

    int emp_id;
    char emp_name[20];
	char emp_place[20];
	char emp_post[20];
	char emp_department[20];
    float basic_salary,gross_salary,DA,HRA,TA;
public:
    void getdata();
    void putdata();
    void calculate();
    void display();
    void increment();
    void id1_display();
    void decrement();
    void id2_display();
};
void Employee::getdata()
{
    cout<<"\n";
    cout<<"\n ******EMPLOYEE MANAGEMENT SYSTEM******";
    cout<<"\n";
    cout<<"\n Enter Employee Name         :";
    cin>>emp_name;
    cout<<"\n Enter Employee ID           :";
    cin>>emp_id;
    cout<<"\n Enter Employee Place        :";
    cin>>emp_place;
    cout<<"\n Enter Employee Post         :";
    cin>>emp_post;
    cout<<"\n Enter Employee Department   :";
    cin>>emp_department;
    cout<<"\n Enter Employee Basic Salary :";
    cin>>basic_salary;
}
void Employee ::putdata()
{
    cout<<"\n--------------------------------------";
	cout<<"\n";
    cout<<"\n ********EMPLOYEE DATA DISPLAY********";
    cout<<"\n";
    cout<<"\n Employee Name         : "<<emp_name;
    cout<<"\n Employee ID           : "<<emp_id;
    cout<<"\n Employee Place        : "<<emp_place;
    cout<<"\n Employee Post         : "<<emp_post;
    cout<<"\n Employee Department   : "<<emp_department;
    cout<<"\n Employee Basic Salary : "<<basic_salary;
    cout<<"\n";
    cout<<"\n--------------------------------------";
    cout<<endl;
}
void Employee::calculate()
{
    TA=(basic_salary/100)*5;
    DA=(basic_salary/100)*10;
    HRA=(basic_salary/100)*15;
    gross_salary=(basic_salary+TA+DA+HRA);
}
void Employee::display()
{
    cout<<"\n-----------------------------";
    cout<<"\n";
    cout<<"\n ********SALARY SLIP*********";
    cout<<"\n";
    cout<<"\n TA           :"<<TA;
    cout<<"\n DA           :"<<DA;
    cout<<"\n HRA          :"<<HRA;
    cout<<"\n Gross Salary  :"<<gross_salary;
    cout<<"\n";
    cout<<"\n-----------------------------";
    cout<<endl;
}
void Employee::increment()
{
    emp_id++;
}
void Employee::id1_display()
{
    cout<<"\n Employee ID Increment : "<<emp_id;
}
void Employee::decrement()
{
    emp_id--;
}
void Employee::id2_display()
{
    cout<<"\n Employee ID Decrement : "<<emp_id;
}
int main()
{
    Employee e;
    int ch;

    do
    {
        cout<<"\n*************************************";
        cout<<"\n******EMPLOYEE MANAGEMENT SYSTEM*****";
        cout<<"\n*************************************";
        cout<<"\n";
        cout<<"\n 1 => Enter Employee Data          : ";
        cout<<"\n 2 => Display Employee Data        : ";
        cout<<"\n 3 => Display Employee Salary Slip : ";
        cout<<"\n 4 => Employee ID Increment        : ";
        cout<<"\n 5 => Employee ID Decrement        : ";
        cout<<"\n 6 => All Employee Record Upadate  : ";
        cout<<"\n 7 => Exit from the program        : ";
        cout<<"\n-------------------------------------";
        cout<<"\nEnter Your choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1 : e.getdata();
                     cout<<"\n";
                     cout<<endl<<"Employee Data has been added successfully..."<<endl;
                     break;
                 
            case 2 : e.putdata();
                      break;
                 
            case 3 : e.calculate();
                     e.display();
                     break;
                 
            case 4 : e.increment();
                     e.id1_display();
                     cout<<"\n";
                     cout<<endl<<"Employee ID Increment successfully..."<<endl;
                     break;
                 
            case 5 : e.decrement();
                     e.id2_display();
                     cout<<"\n";
                     cout<<endl<<"Employee ID Decrement successfully..."<<endl;
                     break;
                 
            case 6 : e.getdata();
                     e.putdata();
                     cout<<"\n";
                     cout<<endl<<"All Employee Record Upadate has been successfully..."<<endl;
                     break;
                 
            case 7 : cout<<"\nThanks for using our Software!!!";
                     break;
                 
           default : cout<<"\n Enter Valid Choice : ";  
        }
    }while(ch!=7);
    return 0;
}
