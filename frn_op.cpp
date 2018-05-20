/*
* Program that demonstrates insertion (>>) operator overloading
* Author: Allen Nembang
*/

#include<iostream>
#include<string>
using namespace std;
class Staff{
private:
  string name, address;
  int age;

public:
  Staff():name(""),address(""),age(0){}

  friend istream &operator >> (istream &input, Staff &s); //friend function declaration for overloading

  void display()
  {
    cout<<"\nStaff Details:\nName: "<<name<<"\nAddress: "<<address<<"\nAge: "<<age<<endl;
  }

};

istream &operator >> (istream &input, Staff &s)
{
  input >> s.name >>s.address >>s.age;
  // return input;
}

int main()
{
  cout<<"Enter the name, address and age of staff: "<<endl;
  Staff st1;
  cin >> st1;
  st1.display();
  return 0;
}