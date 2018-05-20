/*
* Program to convert kilogram into gram using user defined(class Distance) to  basic(int) data
* Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class Distance{
private:
	float kgs;
public:
	Distance():kgs(0) {}
	Distance(float x):kgs(x){}

	operator int() //overloaded casting operator
	{	
		int	gms = kgs*1000;
		return gms; 
	}
};

int main()
{
	float kg;
	cout<<"\nEnter distance in kilogram(kg): ";
	cin>>kg;
	cout<<"Entered distance in kg: "<<kg<<endl;
	Distance d1(kg);
	int grams = d1;
	cout<<"Distance converted into gram: "<<grams<<endl;
	return 0; 

}