/*
* Program to overload the unary minus operator using a friend function
* Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class Lab{
private:
	int num;
public:
	Lab():num(0){}
	Lab(int x):num(x){}
	friend Lab operator - (Lab); //Friend Function Declaration
	void display()
	{	
		cout<<"Overloaded value: ";
		cout<<num<<endl;
	}
};
Lab operator -(Lab L)
{
	L.num = -L.num;
	return L;
}
int main()
{	
	int num;
	cout<<"Enter any positive number: ";
	cin>>num;
	Lab l1(num),l2;
	l2=-l1;
	l2.display();
	return 0;
}