#include<iostream>
using namespace std;
class Base{
protected:
	int x;
public:
	void getData()
	{
		cout<<"Enter any number:"
	}
};
class Derived1:public Base{
protected:
	int y;
};
class Derived2:public Base{
protected:
	int z;
};
int main()
{
	Derived2 d2;
	cout<<d2.x;
	return 0;
}