/*
Program: No constructors in base and derived class
Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class Person{
public:
	void display()
	{
		cout<<"Hello I'm from base class"<<endl;
	}
};
class Student:public Person{

};
int main()
{
	Student st;
	st.display();
	return 0;
}