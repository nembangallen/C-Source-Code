#include<iostream>
using namespace std;
class Test{
private:
	int x;
public:
	Test():x(0){}
	Test(int y):x(y){}

	void display()
	{
		cout<<x<<endl;
	}

	Test operator +()
	{
		x=-x;
		return Test(x);
	}
};
int main()
{
	int z;
	cout<<"Enter positive number: "<<endl;
	cin>>z;
	Test t1(z);
	+t1;
	t1.display();
	return 0;
}