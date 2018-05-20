#include<iostream>
#include "mul.cpp"
using namespace std;
extern int test;
int main()
{
	cout<<test<<endl;
	multiply(5);
	cout<<test<<endl;
	return 0;
}