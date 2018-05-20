#include <iostream>
using namespace std;
class A{
public:
	A(){ cout<<"class A\n"; }
};
class B{
public:
	B(){ cout<<"class B\n"; }
};
class C:public A,public B{
public:
	C(){ cout<<"class C\n"; }
};
int main()
{
	C c1;
	return 0;
}