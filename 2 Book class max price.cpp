#include<iostream>
using namespace std;
class book
{
private:
    char book_name[20];
    char author[20];
public:
    float price;
    void accept()
    {
        cout<<"\nEnter book_ name:";
        cin>>book_name;
        cout<<"\nEnter author name:";
        cin>>author;
        cout<<"\nEnter the price:"<<endl;
        cin>>price;
    }
    void display()
    {
        cout<<"******Book Information******";
	    cout<<"\nbook name="<<book_name;
        cout<<"\nbook author=" <<author;
        cout<<"\nbook price=" <<price;
    }
};
int main()
{
    book b1, b2;
    b1. accept();
    b2. accept();
    if(b1.price>b2.price)
    {
        b1.display();
    }
    else
    {
        b2. display()  ;
    }
    return 0;
}
