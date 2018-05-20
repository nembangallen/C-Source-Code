#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
	int temp=y;
	y=x;
	x=temp;
}
int main()
{
	int x,y;
	cout<<"Enter numbers:";
	cin>>x>>y;
	swap(x,y);
	cout<<"After swap: ";
	cout<<x<<y;
	return 0;
}