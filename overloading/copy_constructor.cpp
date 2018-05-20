#include<iostream>
using namespace std;
class Test{
private:
	int a,b;
public:
	Test(int x,int y)
	{
		a=x;
		b=y;
		cout<<"I'm Constructor"<<endl;
	}

	Test(const Test& obj)
	{
		a=obj.a;
		b=obj.b;
		cout<<"I'm Copy Constructor"<<endl;
	}

	void display()
	{
		cout<<"Values: "<<a<<"\t"<<b<<endl;
	}
};
int main()
{	
	//Normal Constructor Invoked
	Test t1(5,7);

	//Copy Constructor Invoked - Method 1
	Test t2(t1);

	//Copy Constructor Invoked - Method 2
	Test t3 =  t1;

	t1.display();
	t2.display();
	t3.display();

	return 0;
}