#include<iostream>
using namespace std;
#include<string.h>
class Product
{
    int pro_id;
    char pro_name[20];
    int pro_price;

public:
    Product(int i,char s[],int p)
    {
        pro_id=i;
        strcpy(pro_name,s);
        pro_price=p;
    }
    void display()
    {
        cout<<"\nProduct_id:"<<pro_id;
        cout<<"\nProduct_name:"<<pro_name;
        cout<<"\nProduct_price:"<<pro_price;
    }
};
int main()
{
    Product p1(1,"soap",500);
    Product p2(1,"shampu",600);
   Product p3(1,"conditional",700);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}
