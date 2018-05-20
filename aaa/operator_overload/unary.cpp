/*
 Unary operator 
*/
#include <iostream>
using namespace std;
class Test{
private:
	int x;
public:
	Test():x(4){}
	void operator ++()
	{
		x+=1;
	}
	void display()
	{
		cout<<"After overloding: "<<x<<endl;
	}
};
int main()
{
	Test t1;
	++t1;
	t1.display();
	return 0;
}