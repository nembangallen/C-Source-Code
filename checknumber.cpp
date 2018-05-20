#include <iostream>
using namespace std;
class Number{
	public:
		int n;
	public:
		void check()
		{
			if (n == 0)
			{
				cout<<"Entered number is zero"<<endl;
			}else if (n%2 == 0)
			{
				cout<<"Entered number is even"<<endl;
			}else{
				cout<<"Entered number is odd"<<endl;
			}
		}
};

int main()
{
	Number obj;
	cout<<"Enter any number you want to check?"<<endl;
	cin>>obj.n;
	obj.check();
	return 0;
}
