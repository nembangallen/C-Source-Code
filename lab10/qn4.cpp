/*
	Program:   Wri	te a C++ program to reverse the given text 
	Author: Allen Nembang
*/
include<iostream>
#include<cstring>
using namespace std;
void reverse(const string& str)
{
	size_t numOfChars = str.size();
	if(numOfChars == 1)
		cout << str << endl;
    else
    {
       cout << str[numOfChars - 1];
       reverse(str.substr(0, numOfChars - 1));
    }
}
int main()
{
	char name[100];
	cout<<"Enter the name please: ";
	cin.getline(name,100);
	cout<<"You have entered: \n";
	cout<<name<<"\n";
	cout<<"Reversed: ";
	reverse(name);
	return 0;
}
