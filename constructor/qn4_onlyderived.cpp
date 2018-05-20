/*
Program: Default constructor in derived class only
Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class Person{
public:
	void display()
	{
		cout<<"Hey! It's me a function from base class"<<endl;
	}
};
class Student:public Person{
public:
	Student() //default constructor in derived class
	{
		cout<<"Hey! It's me a default constructor from derived"<<endl;
	}
};
int main()
{
	Student st;
	st.display();
}