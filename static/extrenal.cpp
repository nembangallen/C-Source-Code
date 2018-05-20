/*
external storage class 'extern'
*/
#include<iostream>
using namespace std;

void f1();
int main()
{	
	extern int x;
	cout<<x<<endl;
	f1();
	cout<<x<<endl;

	return 0;
}
int x; //global
void f1()
{	
	int x=5; // auto
	x++;
	cout<<x<<endl;
}