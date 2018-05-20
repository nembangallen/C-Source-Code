#include<iostream>
using namespace std;
class Distance{
	public:
		float dis;
	public:
		float getDistance()
		{
			cout<<"Enter distance: ";
			cin>>dis;
			return dis;
		}
};

float great(float &x,float &y)
{	
	float a=y/12;
	return (x > a)?x : a;
}

int main()
{
	Distance obj1;
	Distance obj2;
	float x,y,z;
	cout<<"ENter distance of first object in feet:\n";
	x=obj1.getDistance();
	cout<<"Enter distance of second object in inch:\n";
	y=obj2.getDistance();
	z=great(x,y);
	cout<<"Larger distance is "<<z<<" inch."<<endl;
}