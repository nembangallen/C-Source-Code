#include<iostream>
using namespace std;
class data{
	int x,y;
public:
	data()
	{
		cout<<"\nConstructor";
		x=10;
		y=50;
	}
	~data()
	{
		cout<<"\nDestructor";
	}
	void display()
	{
		cout<<"\n x="<<x;
		cout<<"\n y="<<y;
	}
};
int main()
{
	data *d; //declaration of object pointer
	d=new data; //dynamic object
	d->display();
	delete d; // deleting dynamic object
	return 0;
}