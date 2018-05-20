/*
Addition of members of two different classes using friend Function
*/
#include <iostream>
using namespace std;
class B; //forward declaration
class A{
private:
	int num1;
public:
	A(int x):num1(x){}
	friend int add(A,B);
};
class B{
private:
	int num2;
public:
	B(int y):num2(y){}
	friend int add(A,B);
};
int add(A objA, B objB)
{
	return (objA.num1+objB.num2);
}
int main()
{	
	int a,b;
	cout<<"Enter two integers: "<<endl;
	cin>>a>>b;
	A objA(a);
	B objB(b);
	cout<<"Sum is"<<add(objA,objB);
	return 0;
}