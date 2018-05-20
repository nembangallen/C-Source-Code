#include<iostream>
using namespace std;
class Parent{
public:
	Parent()
	{
		cout<<"Parent Constructor.\n";
	}
	void display()
	{
		cout<<"Hello";
	}
	~Parent()
	{
		cout<<"Parent Destructor.\n";
	}

};
class Child:public Parent{
public:
	Child()
	{
		cout<<"Child Constructor.\n";
	}
	void display()
	{
		cout<<"Hello";
	}
	~Child()
	{
		cout<<"Child Destructor.\n";
	}
};
int main()
{
	Parent objP;
	objP.display();
	return 0;
}