#include <iostream>
using namespace std;
class B;
class A{
private:
	int x;
public:
	A():x(0){}
	void getNum()
	{
		cout<<"Enter a number of class A: ";
		cin>>x;
	}
	friend int operator +(A,B);
};
class B{
private:
	int y;
public:
	B():y(0){}
	void getNum()
	{
		cout<<"Enter a number of class B: ";
		cin>>y;
	}
	friend int operator +(A,B);
};
int operator +(A objA, B objB)
{	
	cout<<"Sum of two numbers from class A and class B: ";
	cout<<objA.x+objB.y<<endl;
}
int main()
{
	A objA;
	B objB;
	objA.getNum();
	objB.getNum();
	objA+objB;
	return 0;
}