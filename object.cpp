#include<iostream>
using namespace std;
class Time{
private:
	int x,y;
public:
	Time(int a, int b):x(a),y(b){}
	operator int ();
};
Time::operator int()
{
	cout<<"Class type to  basic type converter"<<endl;
	return x+y;
}

int main()
{
	int num;
	Time t(2,4);
	num = t;
	cout<<"output"<<num<<endl;

	return 0;
}