#include<iostream>
#include<string>
using namespace std;
class Person{
private:
	string name;
	string address;
	int age;
public:
	Person():name(""),address(""),age(0){}
	friend istream &operator >>(istream &input, Person &P);
	friend ostream &operator <<(ostream &output, Person &P);
};

istream &operator >>(istream &input, Person &P)
{
	input>>P.name>>P.address>>P.age;
	return input;
}

ostream &operator <<(ostream &output, Person &P)
{
	output<<"Person Description"<<endl;
	output<<"Name: "<<P.name<<"\nAddress: "<<P.address<<"\nAge: "<<P.age<<endl;
	return output;
}
int main()
{	
	cout<<"Enter name, address and age of Person: "<<endl;
	Person Allen;
	cin>>Allen;
	cout<<Allen;
	return 0;
}