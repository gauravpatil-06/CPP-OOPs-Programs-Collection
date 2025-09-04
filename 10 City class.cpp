#include<iostream>
using namespace std ;
class City
{
private:
    char name[20];
    int population;
public:
    void accept()
    {
        cout<<"\nEnter city name:";
        cin>>name;
        cout<<"\nEnter city population:";
        cin>>population;
    }
    void display()
    {
        cout<<"city name="<<name<<endl;
        cout<<"city population="<<population<<endl;
    }
};
int main()
{
    City c[10];
    int i;
    for( i=0; i<10; i++)
    {
        c[i].accept();
    }
    for(i=0; i<10; i++)
    {
        c[i].display();
    }
    return 0;
}
