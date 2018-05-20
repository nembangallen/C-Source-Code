#include <iostream>
using namespace std;
class Test{
private:
	int length,breadth;
public:
	Test():length(10),breadth(5){}
	Test(int x,int y):length(x),breadth(y){}
	void displayArea()
	{
		cout<<"Area is "<<length*breadth<<" sq. units."<<endl;
	}
};
int main()
{
	Test t1,t2(5,5);
	t1.displayArea();
	t2.displayArea();
	return 0;
}