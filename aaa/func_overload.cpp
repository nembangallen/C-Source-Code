#include <iostream>
using namespace std;
class Test{
public:
	void display()
	{
		cout<<"Without arguments."<<endl;
	}
	void display(int x)
	{
		cout<<"Displaying integer: "<<x<<endl;
	}
	void display(double f)
	{
		cout<<"Displaying double number: "<<f<<endl;
	}
	void display(char *c)
	{
		cout<<"Displaying charcater: "<<c<<endl;
	}
};
int main()
{
	Test obj;
	obj.display();
	obj.display(4);
	obj.display(20.04);
	obj.display('A');
	return 0;
}