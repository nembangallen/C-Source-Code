#include<iostream>

using namespace std;

class Test{
private:
	int x,y;
public:
	Test():x(0),y(0){}
	Test(int p,int q):x(p),y(q){}

	Test operator + (Test r)
	{
		Test temp;
		temp.x=x+r.x;
		temp.y=y+r.y;
		return (temp);
	}

	void showData()
	{
		cout<<"x: "<<x<<"y: "<<y<<endl;
	}
};
int main()
{
	Test t1(3,4),t(5,6),t3;
	// t3=t1+t2;
	// t3.showData();
	return 0;
}