#include <iostream>
using namespace std ;
class Number
{
  private:
	int x, y;

  public:
	 Number (int a , int b)
	{
		x = a;
		y = b;
	}
	void display()
	{
		cout << "Addition="<< (x + y) << endl;
		cout << "Substraction="<< (x - y) << endl;
		cout << "Multiplication="<< (x * y) << endl;
		cout << "Division="<< (x / y) << endl;
	}
};
int main()
{
	Number n(20, 10);
	n.display();
	return 0;
}
