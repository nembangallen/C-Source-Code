#include<iostream>
using namespace std;
class Base{
public:
	virtual void display()
	{
		cout<<"Base class.";
	}	
};

class Derived: public Base{
public:
	void display()
	{
		cout<<"Derived class.";
	}
};

class Derived1: public Base{
public:
	void display()
	{
		cout<<"Derived1 class.";
	}
};
int main()
{
	Base *b;
	Derived d;
	Derived1 d1;
	b=&d;
	b->display();
	return 0;
}
