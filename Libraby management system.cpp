#include<iostream>
using namespace std;

class Book
{
protected:

    int book_id;
    char book_name[20];
    char author_name[20];
	char book_price[20];
public:
    void getdata();
    void putdata();
    void increment();
    void id1_display();
    void decrement();
    void id2_display();
};
void Book::getdata()
{
    cout<<"\n";
    cout<<"\n *****LIBRARY MANAGEMENT SYSTEM*****";
    cout<<"\n";
    cout<<"\n Enter Book Name          :";
    cin>>book_name;
    cout<<"\n Enter Book ID            :";
    cin>>book_id;
    cout<<"\n Enter Author Name        :";
    cin>>author_name;
    cout<<"\n Enter Book Price         :";
    cin>>book_price;
}
void Book::putdata()
{
    cout<<"\n--------------------------------------";
	cout<<"\n";
    cout<<"\n *******LIBRARY DATA DISPLAY*******";
    cout<<"\n";
    cout<<"\n Book Name         : "<<book_name;
    cout<<"\n Book ID           : "<<book_id;
    cout<<"\n Author Name       : "<<author_name;
    cout<<"\n Book price        : "<<book_price;
    cout<<"\n";
    cout<<"\n--------------------------------------";
    cout<<endl;
}
void Book::increment()
{
    book_id++;
}
void Book::id1_display()
{
    cout<<"\n Book ID Increment : "<<book_id;
}
void Book::decrement()
{
    book_id--;
}
void Book::id2_display()
{
    cout<<"\n Book ID Decrement : "<<book_id;
}
int main()
{
    Book e;
    int ch;

    do
    {
        cout<<"\n*************************************";
        cout<<"\n*****LIBRARY MANAGEMENT SYSTEM****";
        cout<<"\n*************************************";
        cout<<"\n";
        cout<<"\n 1 => Enter Book Data          : ";
        cout<<"\n 2 => Display Book Data        : ";
        cout<<"\n 3 => Book ID Increment        : ";
        cout<<"\n 4 => Book ID Decrement        : ";
        cout<<"\n 5 => All Book Record Upadate  : ";
        cout<<"\n 6 => Exit from the program        : ";
        cout<<"\n-------------------------------------";
        cout<<"\nEnter Your choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1 : e.getdata();
                     cout<<"\n";
                     cout<<endl<<"Book Data has been added successfully..."<<endl;
                     break;
                 
            case 2 : e.putdata();
                      break;
                 
            case 3 : e.increment();
                     e.id1_display();
                     cout<<"\n";
                     cout<<endl<<"Book ID Increment successfully..."<<endl;
                     break;
                 
            case 4 : e.decrement();
                     e.id2_display();
                     cout<<"\n";
                     cout<<endl<<"Book ID Decrement successfully..."<<endl;
                     break;
                 
            case 5 : e.getdata();
                     e.putdata();
                     cout<<"\n";
                     cout<<endl<<"All Book Record Upadate has been successfully..."<<endl;
                     break;
                 
            case 6 : cout<<"\nThanks for using our Software!!!";
                     break;
                 
           default : cout<<"\n Enter Valid Choice : ";  
        }
    }while(ch!=6);
    return 0;
}
