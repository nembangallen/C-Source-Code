/*
	Program: Write  a C++ code to get the list of leap years from 1900 to 2000.
	Author: Allen Nembang
*/
#include<iostream>
using namespace std;
//function to check leap year
int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
int main()
{
	int i,n;
	cout<<"Leap years from 1900 t0 2000 are: \n";
	for(i=1900;i<=2000;i++)
	{
		if(checkLeapYear(i))
            cout<<i<<" ";
	}
	return 0;
}
