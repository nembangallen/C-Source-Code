#include<iostream>
using namespace std;
class Demo{
	static int counter;
public:
	void increase_count()
	{
		counter++;
	}

	static void showCounter()
	{
		cout<<"Count"<<counter<<endl;
	}
};

int Demo::counter;
int main()
{
	Demo obj1;
	obj1.increase_count();
	obj1.increase_count();
	Demo::showCounter();

	return 0;
}