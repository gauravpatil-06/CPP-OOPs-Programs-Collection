#include<iostream>
#include<string.h>
using namespace std;
class product
{
	protected:
	int product_id,product_price;
	char product_name[10];
	public:
	product(int id)
	{
		product_id=id;
		strcpy(product_name,"Apple");
		product_price=450;
	}
	product(int id,char name[10])
	{
		product_id=id;
		strcpy(product_name,name);
		product_price=500;
	}
	product(int id,char name[10],float price)
	{
		product_id=id;
		strcpy(product_name,name);
		product_price=price;
	}
	void display()
	{
		cout<<"\nProduct id="<<product_id;
		cout<<"\nproduct name="<<product_name;
		cout<<"\nproduct price="<<product_price;
		cout<<"\n";
	}
};
int main()
{
	product p1(1010),p2(2020,"Mango"),p3(3030,"orange",600);
    p1.display();
    p2.display();
    p3.display();
}
