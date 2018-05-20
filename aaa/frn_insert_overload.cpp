#include <iostream>
using namespace std;
class Test{
private:
	int x;
	int y;
	int sum;
public:
	Test():x(0),y(0),sum(0){}
	friend ostream & operator <<(ostream &out,const Test &t);
	friend istream & operator >>(istream $in, Test &t);
};
ostream & operator << (ostream &out, const Test &t)
{
	out<<"The sum is: "<<c.sum;
}
istream & operator >> (istream &in, Test &t)
{
	cout<<"Enter two numbers in x and y: ";
	in>>t.x>>t.y;
	return in;
}
int main()
{
	Test obj;
	cin>>obj;
	cout<<obj;
	return 0;
}