/*
* Program to convert kilogram into gram using basic(float) to user defined(class Distance) data
* Author: Allen Nembang
*/
#include<iostream>
using namespace std;
// const float rate=1000.0;
class Distance{
private:
	int gm;
public:
	Distance():gm(0){}
	Distance(float kg)
	{
		gm=kg*1000.0;
	}
	void display()
	{
		cout<<"In gram: "<<gm<<endl;
	}
};
int main()
{
	cout<<"Kg to gm"<<endl;
	float kgs;
	cout<<"Enter value in kg: ";
	cin>>kgs;
	Distance dist1=kgs;
	dist1.display();
	return 0;
}