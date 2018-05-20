#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter integer: ";
	cin>>x;
	try{
		if (x<=0)
		{
			throw x;
		}
		cout<<"You have entered: "<<x<<endl;
	}
	catch(int x)
	{
		cout<<"Exception occured please enter positive number.\n";
	}
	return 0;
}