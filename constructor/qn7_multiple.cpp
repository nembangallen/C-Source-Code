/*
Program: Default constructors for multiple inherited derived class
Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class Person{
public:
	Person()
	{
		cout<<"Hey! Person Constructor is called"<<endl;
	}
};
class Teacher{
public:
	Teacher()
	{
		cout<<"Hey! Teacher Constructor is called"<<endl;
	}
};
class Student: public Teacher, public Person{
public:
	Student()
	{
		cout<<"Hey! Student Constructor is called"<<endl;
	}
};
int main()
{
	cout<<"\n";
	Student st;
	cout<<"\n";
	return 0;
}