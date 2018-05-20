/*
Program: Default and parameterized constructors in base and parameterized constructor in derived class
Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class Person{
private:
	int x;
public:
	Person(int i)
	{
		x=i;
		cout<<"Hey It's me base parameterized constructor and value: "<<x<<endl;
	}
};
class Student:public Person{
private:
	int y;
public:
	Student(int j):Person(j)
	{
		y=j;
		cout<<"Hey It's me from derived parameterized constructor and value: "<<y<<endl;
	}
};
int main()
{
	Student st(2);
	return 0;
}