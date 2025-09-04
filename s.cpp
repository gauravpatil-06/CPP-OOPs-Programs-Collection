#include<iostream>
using namespace std;
class staff
{
private:
    char name[20];
    float basic_salary, DA, HRA, gross_salary;
public:
    void accept()
    {
        cout<<"\nEnter Name:";
        cin>>name;
        cout<<" \nEnter basic_salary:";
        cin>>basic_salary;
    }
    void calculate()
    {
        DA=((basic_salary/100)*74.5);
        HRA=((basic_salary/100)*30);
        gross_salary=(basic_salary+HRA+DA);
    }
    void display()
    {
        cout<<"\n";
	    cout<<"******Staff information******";
		cout<<"\nbasic_salary:"<<basic_salary;
        cout<<"\nDA:"<<DA;
        cout<<"\nHRA:"<<HRA;
        cout<<"\ngross_salary:"<<gross_salary;
    }
};
int main()
{
    staff s;
    s.accept();
    s.calculate();
    s.display();
    return 0;
}
