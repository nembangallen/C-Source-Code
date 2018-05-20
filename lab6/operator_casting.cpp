#include<iostream>
using namespace std;
class Ktm{
// private:
	int price;
public:
	Ktm():price(0){}
	Ktm(int y):price(y){}
	// int get()
	// {
	// 	return price;
	// }
	void show()
	{
		cout<<price<<endl;
	}
};
class Jhapa{
// private:
	int price;
public:
	Jhapa():price(0){}
	Jhapa(int x):price(x){}
	void show()
	{
		cout<<price<<endl;
	}
	operator Ktm()
	{	
		int y=price;
		return Ktm(y);
	}
};
int main()
{
	Ktm kt;
	Jhapa ja(1000);
	kt=ja;
	cout<<"Jhapa: \n";
	ja.show();
	cout<<"Ktm: \n";
	kt.show();
	return 0;
}
