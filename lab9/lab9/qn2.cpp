#include<iostream>
using namespace std;
class Polygon{
	protected:
		float length,height;
	public:
		Polygon(float n1,float n2):length(n1),height(n2){}
		virtual void area()=0;
			
};
class Triangle:public Polygon{
	public:
		Triangle(float len,float ht):Polygon(len,ht){}
		void area()
		{
			cout<<"Area of traingle is: "<<(length*height)/2<<" sq. units"<<endl;
		}
};
class Rectangle:public Polygon{
	public:
		Rectangle(float len,float ht):Polygon(len,ht){}
		void area()
		{
			cout<<"Area of Rectangle is: "<<length*height<<" sq. units"<<endl;
		}
};
int main()
{	
	float l,h;
	cout<<"Enter length and height of triangle: ";
	cin>>l>>h;
	Triangle t1(l,h);
	t1.area();
	cout<<"Enter length and height of rectangle: ";
	cin>>l>>h;
	Rectangle r1(l,h);
	r1.area();
	
	return 0;	
}
