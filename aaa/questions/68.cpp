#include <iostream>
using namespace std;
class Shape{
protected:
	float length,breadth,area;
public:
	void getData()
	{
		cout<<"Enter length and breadth: \n";
		cout<<"Enter the length: ";
		cin>>length;
		cout<<"Enter the breadth: ";
		cin>>breadth;
	}
	void displayArea()
	{
		cout<<"area is "<<area<<" sq units."<<endl;
	}

};
class Triangle:public Shape{
public:
	void calculateArea()
	{
		area=(length*breadth)/2;
	}
};
class Rectangle:public Shape{
public:
	void calculateArea()
	{
		area=length*breadth;
	}
};
int main()
{
	Triangle t1;
	t1.getData();
	t1.calculateArea();
	cout<<"Triangle's ";
	t1.displayArea();
	Rectangle r1;
	r1.getData();
	r1.calculateArea();
	cout<<"Rectangle's ";
	r1.displayArea();
	return 0;
}