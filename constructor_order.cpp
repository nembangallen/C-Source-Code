#include<iostream>
using namespace std;
class Test{
	static int count;
public:
	Test()
	{
		count++;
		cout<<"Object has been created "<<count<<endl;
	}

	~Test()
	{
		cout<<"Object has been destroyed "<<count<<endl;
		count--;
	}
};
int Test::count;  //initialize the static data
int main()
{
	Test t1,t2,t3;
	return 0;
}