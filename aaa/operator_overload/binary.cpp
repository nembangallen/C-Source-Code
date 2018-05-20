#include <iostream>
using namespace std;
class Test{
private:
	int x;
	// int y;
public:
	Test():x(0){}
	void getNum()
	{
		cin>>x;
	}
	Test operator +(Test t)
	{
		Test temp;
		temp.x=x+t.x;
		return temp;
	}
	void display()
	{
		cout<<"Sum is: "<<x<<endl;
	}
};
int main()
{
	Test t1,t2,result;
	cout<<"Enter first number: "<<endl;
	t1.getNum();
	cout<<"Enter second number: "<<endl;
	t2.getNum();
	result=t1+t2;
	result.display();
	return 0;
}