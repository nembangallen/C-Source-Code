#include <iostream>
using namespace std;
class Test{
public:
	virtual void display()
	{
		cout<<"Display from base class."<<endl;
	}
	void show()
	{
		cout<<"Show from a base class."<<endl;
	}
};
class derived:public Test{
public:
	void display()
	{
		cout<<"Display from derived class."<<endl;
	}
	void show()
	{
		cout<<"Show from a a derived class."<<endl;
	}
};
int main()
{
	Test *bptr;
	derived d;
	// d.display();	
	bptr=&d;
	bptr->display();
	bptr->show();

	return 0;
}