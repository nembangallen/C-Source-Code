#include <iostream>
using namespace std;
class B;
class A{
private:
	int a;
public:
	void getValue()
	{
		cout<<"Enter a number: ";
		cin>>a;
	}
	friend void operator >(A,B);
};
class B{
private:
	int b;
public:
	void getValue()
	{
		cout<<"Enter a number: ";
		cin>>b;
	}
	friend void operator >(A,B);
};
void operator >(A objA,B objB)
{
	objA.a>objB.b?cout<<objA.a<<" is greater.":cout<<objB.b<<" is greater."<<endl;
}
int main()
{
	A a1;
	B b1;
	a1.getValue();
	b1.getValue();
	a1>b1;
	return 0;
}