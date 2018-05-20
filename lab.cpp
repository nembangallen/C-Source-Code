#include <iostream>
using namespace std;
class Student{
	private:
		int id;
		char name[25];
		float NM,OOP,EN,avg;
	public:
		void info()
		{
			cout<<"Enter the name of Student: ";
			cin>>name;
			cout<<"Enter the student ID: ";
			cin>>id;
			cout<<"Enter the marks obtained in different subjects."<<endl;
			cout<<"Enter marks obtained in NM: ";
			cin>>NM;
			cout<<"Enter the marks obtained in OOP: ";
			cin>>OOP;
			cout<<"Enter the marks in English: ";
			cin>>EN;
			avg = (NM+OOP+EN)/3;
		}
		void average()
		{
			cout<<"ID of student is: "<<id<<endl;
			cout<<"Name of student is: "<<name<<endl;
			cout<<"The average marks obtained by "<<name<<"is "<<avg<<endl;

		}
};

int main()
{
	Student s1,s2,s3;
	s1.info();
	s2.info();
	s3.info();

	cout<<"The details of First Student is: \n",s1.average();
	cout<<"The details of Second Student is: \n",s2.average();
	cout<<"The details of Third Student is: \n",s3.average();
}

