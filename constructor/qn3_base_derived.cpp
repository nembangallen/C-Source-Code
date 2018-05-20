#include<iostream>
using namespace std;
class Person{
public:
	Person() //default or non parameterized constructor
	{
		cout<<"Hey! I'm from base."<<endl;
	}
};
class Student:public Person{
public:
	Student() //default or non parameterized constructor 
	{
		cout<<"Hey! I'm from derived."<<endl;
	}
};

int main()
{
	Student st;
	return 0;
}