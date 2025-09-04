#include<iostream>
using namespace std; 
class Employee
{
private:
    int emp_id;
    char emp_name[10];
public:
    float salary;
    void accept()
    {
        cout<<"\nEnter Employee id:";
        cin>>emp_id;
        cout<<"\nEnter Employee name:";
        cin>>emp_name;
        cout<<"\nEnter Employee salary:";
        cin>>salary;
    }
    void display()
    {
        cout<<"Employee id="<<emp_id<<endl;
        cout<<"Employee name="<<emp_name<<endl;
        cout<<"Employee salary="<<salary<<endl;
    }
};
main()
{
    Employee e[3];
    int i;
    for(  i=0; i<3; i++)
    {
        e[i].accept();
    }
    for( i=0; i<3; i++)
    {
        if (e[i].salary>25000)
        {
            e[i].display();
        }
    }
    return 0;
}
