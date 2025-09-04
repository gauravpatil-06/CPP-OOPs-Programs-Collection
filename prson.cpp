#include<iostream>
using namespace std;
class person
{
  protected:
          int age;
          char name[20],gender[20];
};
class employee:public person
{
  protected:
            int emp_id;
            char company[20];
            float salary;
};
class programmer:public employee
{
     protected:
           int no_of_prog_lang_known;
     public:
          void accept()       
          {
           cout<<"\nEnter Name:";
           cin>>name;
           cout<<"\nEnter gender:";
           cin>>gender;
           cout<<"\nEnter Age:";
           cin>>age;
           cout<<"\nEnter employee id:";
           cin>>emp_id;
           cout<<"\nEnter company:";
           cin>>company;
           cout<<"\nEnter salary:";
           cin>>salary;
           cout<<"\nEnter no of programming lang known:";
           cin>>no_of_prog_lang_known;
          } 
           void display() 
           {
             cout<<"\nName:"<<name;
             cout<<"\nGender:"<<gender;
             cout<<"\nAge:"<<age;
             cout<<"\nEmployee ID:"<<emp_id;
             cout<<"\ncompany:"<<company;
             cout<<"\nsalary:"<<salary;
             cout<<"\nNo of programming language known:"<<no_of_prog_lang_known;
           }
          
};
int main()
{
  programmer p;

  p.accept();
  p.display();
 
}
