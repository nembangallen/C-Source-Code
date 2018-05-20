#include<iostream>
using namespace std;
void swap(int *n1,int *n2);
int main()
{
	int x,y;
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Enter second number: ";
	cin>>y;
	cout<<"Before calling function:"<<endl;
	cout<<x<<" "<<y<<endl;
	swap(&x,&y);
	cout<<"After calling function:"<<endl;
	cout<<x<<" "<<y<<endl;
	return 0;
}

void swap(int *n1,int *n2)
{
	int temp;
	temp = *n1;
	*n1=*n2;
	*n2=temp;
}