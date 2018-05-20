#include <iostream>
using namespace std;
class Test{
private:
	int x;
public:
	Test():x(5){}
	void operator ++()
	{
		++x;
	}
	void operator --()
	{
		--x;
	}
	void display()
	{
		cout<<x<<endl;
	}
};
int main()
{
	Test t1,t2;
	++t1;
	cout<<"Ater increment overloading: ";
	t1.display();
	--t2;
	cout<<"After decrement overloading: ";
	t2.display();
	return 0;
}