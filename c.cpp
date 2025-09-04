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
           cout<<"\nEnter car type:";
           cin>>car_type;
           cout<<"\nEnter brand name:";
           cin>>brand_name;
           cout<<"\nEnter speed:";
           cin>>speed;
           cout<<"\nEnter model name:";
           cin>>model_name;
           cout<<"\nEnter price:";
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
