#include<iostream>
using namespace std;
class Item{
private:
	int a,b;
public:
	void showData()
	{
		cout<<a<<b<<endl;
	}
};
class Product{
private:
	int m,n;
public:
	void setData(int x,int y)
	{
		m=x;
		n=y;
	}
};

int main()
{
	Item i1;
	Product p1;
	p1.setData(3,4);
	i1=p1;
	i1.showData();
	return 0;
}