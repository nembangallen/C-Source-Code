#include<iostream>
using namespace std;
class Test{
private:
	int x;
	int y;
public:
	Test():x(3),y(6){}

	Test(int a,int b):x(a),y(b){}

	int Area()
	{ 
		return x*y; 
	}

	void display(int temp)
	{
		cout<<"Area: "<<temp<<endl;
	}
};

int main()
{
	Test t1, t2(4,5);
	int temp;

	cout<<"Area when no argument is passed: "<<endl;
	temp=t1.Area();
	t1.display(temp);

	cout<<"Area when (4,5) is passed as argument."<<endl;
	temp=t2.Area();
	t2.display(temp);

	return 0;

}