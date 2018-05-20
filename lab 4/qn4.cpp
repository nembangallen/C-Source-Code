#include <iostream>
using namespace std;
void display()
{
	for (int i = 0; i <= 4; i++)
	{
		cout<<"*\n";
	}
}

void display(char b)
{
	for (int i = 0; i <=6; i++)
	{
		cout<<b<<endl;
	}
}

void display(char c, int x)
{
	for (int i = 0; i < x; i++)
	{
		cout<<c<<endl;
	}
}

int main()
{
	char c;
	int n;
	cout<<"\nFunction with no argument:\n";
	display();
	cout<<"\nFunction with 1 char argument"<<endl;
	cout<<"Enter any character: "<<endl;
	cin>>c;
	cout<<"\nThey are:\n";
	display(c);

	cout<<"\nFunction with 1 char and 1 integer arguments"<<endl;
	cout<<"Enter any character and integer: "<<endl;
	cin>>c>>n;
	cout<<"\nThey are:\n";
	display(c,n);

	return 0;
}