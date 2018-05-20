#include <iostream>
using namespace std;
class Test{
protected:
	int x,y;
public:
	Test(int a,int b):x(a),y(b){}
	void display()
	{
		cout<<x<<" and "<<y<<endl;
	}
};
class Derived: public Test{
public:
	Derived(int p,int q):Test(p,q){} //message passing to parent constructor
};
int main()
{
	Derived d1(3,5);
	d1.display();
	return 0;
}