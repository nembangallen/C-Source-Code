#include <iostream>
using namespace std;
class Test{
public:
	virtual void display()
	{
		cout<<"From Base class(Test)."<<endl;
	}
};
class Exam:public Test{
public:
	void display()
	{
		cout<<"From Derived class(Exam)."<<endl;
	}
};
int main()
{
	Test *obj;
	Exam e1;
	obj=&e1;
	obj->display();
	// Exam obj;
	// obj.display();
	return 0;
}