#include<iostream>
using namespace std;
class A;

class B{
	int b;
public: 
	void get(){
		cin>>b;
	}
	void max(const A& x, const B& y);
};

class A{
	int a;
public:
	void get(){
		cin>>a;
	}
	friend void B :: max(const A& , const B&);
};

void B::max(const A& x, const B& y) {
	if (x.a > y.b)
		cout<< " x is greater";
	else
		cout<<"y is greater";
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