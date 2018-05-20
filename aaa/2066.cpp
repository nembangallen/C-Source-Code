#include <iostream>
#include <string>
using namespace std;
class student{
protected:
	string name;
	int year;
	float sum,average;
public:
	student():sum(0),average(0){} //default constructor
	void stdInfo()
	{
		cout<<"Enter student's details here:\n";
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter year(1-4): ";
		cin>>year;
	}
	void displayInfo()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Year: "<<year<<endl;
	}
};
class computerScience:public student{
private:
	float IT,OOP,DSA;
public:
	computerScience():IT(0),OOP(0),DSA(0){}
	void getCsMarks()
	{	
		cout<<"Enter Marks for CS student: \n";
		cout<<"Enter IT marks: ";cin>>IT;cout<<"\nEnter OOP marks: ";cin>>OOP;cout<<"\nEnter DSA marks: ";cin>>DSA;
	}
	void getCsAvg()
	{	
		displayInfo();
		sum=IT+OOP+DSA;
		average=sum/3;
		cout<<"The average marks of CS student is "<<average<<endl;
	}

};
class mathematics:public student{
private:
	float algebra,geometry,arithmetic;
public:
	mathematics():algebra(0),geometry(0),arithmetic(0){}
	void getMathMarks()
	{	
		cout<<"Enter Marks for Mathematics student: \n";
		cout<<"Enter algebra marks: ";cin>>algebra;cout<<"\nEnter geometry marks: ";cin>>geometry;cout<<"\nEnter arithmetic marks: ";cin>>arithmetic;
	}
	void getMathAvg()
	{	
		displayInfo();
		sum=algebra+geometry+arithmetic;
		average=sum/3;
		cout<<"The average marks of Mathematics student is "<<average<<endl;
	}
};
int main()
{	
	computerScience cs;
	mathematics m;
	cs.stdInfo();
	cs.getCsMarks();
	m.stdInfo();
	m.getMathMarks();
	cs.getCsAvg();
	m.getMathAvg();
	return 0;
}