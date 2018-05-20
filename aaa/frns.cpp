/* 
	A member function of a class can be defined as a friend function of another class.
*/
#include <iostream>
using namespace std;
class A;
class B{
private:
	int b;
public:
	void get()
	{	
		cout<<"Enter a number y: ";
		cin>>b;
	}
	void max(const A& x,const B& y); //here this is the member function 
};
class A{
private:
	int a;
public:
	void get()
	{	
		cout<<"Enter a number x: ";
		cin>>a;
	}
	friend void B::max(const A&,const B&); //member function of another class here declared as friend function
};
void  B::max(const A& x,const B& y)
{
	if (x.a>y.b)
		cout<<"x is greater(class A)";
	else
		cout<<"y is greater(class B)";
}
int main()
{
	A x;
	B y,c;
	x.get();
	y.get();
	c.max(x,y);
	return 0;
}