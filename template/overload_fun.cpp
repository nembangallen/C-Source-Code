#include<iostream>
using namespace std;
template <class T> //declare template
void show(T c)
{
	cout<<"\nTemplate Variable c="<<c;
}

void show(int f)
{
	cout<<"\nInteger variable f="<<f;
}

int main()
{
	show('C');
	show(50);
	show(50.25);
	return 0;
}