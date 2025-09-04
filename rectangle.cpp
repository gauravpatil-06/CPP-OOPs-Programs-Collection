#include<iostream>
using namespace std;
class Area
{
    public:
           int a(int a,int b)
           {
               return(a*b);
           }
};
class perimeter
{
    public:
          int p(int x,int y)
          {
              return(2*(x+y));
          }
};
class Rectangle:public Area,public perimeter
{
    protected:
             int length,breadth;
    public:
         Rectangle()
         {
             cout<<"\n Enter length:";
             cin>>length;
             cout<<"\nEnter breadth:";
             cin>>breadth;
         }
         void display()
         {
             cout<<"\nTo calculate Area:";
             cout<<"\nArea of rectangle="<<Area::a(length,breadth);
             cout<<"\nTo calculate perimeter:";
             cout<<"\nperimeter of rectangle="<<perimeter::p(length,breadth);
         }
};
int main()
{
    Rectangle r;

    r.display();
 
}
