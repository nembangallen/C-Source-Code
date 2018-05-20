#include<iostream>
using namespace std;
class Number{
private:
	int r;
	int i;
public:
	Number():r(0),i(0){}
	Number(int x,int y):r(x),i(y){}
	friend void operator -(Number &N);
	void display()
	{
		cout<<"Real: "<<r<<endl;
		cout<<"Imaginary: "<<i<<endl;
	}
};
void operator -(Number &N)
{
	N.r=-N.r;
	N.i=-N.i;
}
int main()
{
	Number n1(5,4);
	cout<<"Before overloading with Friend Function:\n";
	n1.display();
	-n1;
	cout<<"After overloading with Friend Function:\n";
	n1.display();
	return 0;
}