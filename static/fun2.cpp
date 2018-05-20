#include<iostream>
using namespace std;
class Static_Example
{
	private:
	static int number;
	public:
	static void show()
	{
		cout<<"Number = "<<number<<endl;
	}
};
int Static_Example::number=50;
int main()
{
	Static_Example::show();
	return 0;
}