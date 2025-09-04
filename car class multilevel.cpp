#include<iostream>
using namespace std;
class car
{
  protected:
          char car_type[20];
};
class Brand:public car
{
  protected:
            char brand_name[20];
            float speed;
};
class model:public Brand
{
     protected:
           char model_name[20];
           float price;
     public:
          void accept()       
          {
           cout<<"Enter car type:"<< endl;
           cin>>car_type;
           cout<<"Enter brand name:"<< endl;
           cin>>brand_name;
           cout<<"Enter speed:"<< endl;
           cin>>speed;
           cout<<"Enter model name:"<< endl;
           cin>>model_name;
           cout<<"Enter price:"<< endl;
           cin>>price;
          } 
           void display() 
           {
             cout<<"\nCar type:"<<car_type;
             cout<<"\nBrand name:"<<brand_name;
             cout<<"\nSpeed:"<<speed;
             cout<<"\nModel name:"<<model_name;
             cout<<"\nprice:"<<price;
           }
          
};
int main()
{
  model p;
 
  p.accept();
  p.display();
 
}
