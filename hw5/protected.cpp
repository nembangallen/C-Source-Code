#include<iostream>
using namespace std;
class Base{
private:
	int x;
protected:
	int y;
public:
	int z;
	Base():y(2){}
};
class Derived: public Base{
public:
	void show()
	{
		cout<<y<<endl;
	}
};
int main()
{
	Derived d;
	d.show();
	return 0;
}