#include <iostream>
using namespace std;
class Test{
	int x;
public:
	virtual void show()=0;
	int getX(){return x;}
};
class Derived:public Test{
public:
	void show()
	{
		cout<<"Derived show function."<<endl;
	}
};
int main()
{
	Derived d;
	d.show();
	return 0;
}
