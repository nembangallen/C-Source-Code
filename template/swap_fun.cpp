#include<iostream>
using namespace std;
template <class T>
void swap(T *n1,T *n2)
{
	T temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}

int main()
{
	int i1,i2;
	float f1,f2;
	cout<<"Enter two integers: ";
	cin>>i1>>i2;
	cout<<"Enter two floating-point numbers: ";
	cin>>f1>>f2;
	cout<<"Before passing data to function template.\n";
	cout<<"i1= "<<i1<<"\ti2= "<<i2<<endl;
	cout<<"f1= "<<f1<<"\tf2= "<<f2<<endl;
	swap(&i1,&i2);
	swap(&f1,&f2);
	cout<<"After passing data to function template.\n";
	cout<<"i1= "<<i1<<"\ti2= "<<i2<<endl;
	cout<<"f1= "<<f1<<"\tf2= "<<f2<<endl;
	return 0;
}