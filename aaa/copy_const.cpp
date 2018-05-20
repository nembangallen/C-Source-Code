#include <iostream>
using namespace std;
class Test{
	int code;
	float price;
public:
	Test(int x,float y):code(x),price(y){}
	Test(const Test &t);
	void disp();
};
Test::Test(const Test &t)
{
	code=t.code;
	price=t.price;
}
void Test::disp()
{
	cout<<"Code: "<<code<<endl;
	cout<<"Price: "<<price<<endl;
}
int main()
{
	Test t1(101,30.6545);
	Test t2=t1; //as assignment
	Test t3(t2); // as argument
	t2.disp();
	t3.disp();
	return 0;
}