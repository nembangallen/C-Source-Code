/*
Program: Default constructor in base class only
Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class Person{
public:
	Person() //default constructor
	{
		cout<<"Hey! I'm the default base constructor"<<endl;
	}
};
class Student:public Person{

};
int main()
{
	Student st;
	return 0;
}