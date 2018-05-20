/*
	Program: Write  a C++ code to calculate the compound interest of a sum of a money.
	Author: Allen Nembang
*/
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double principle,rate, time;
 	cout<<"Enter the principle(amount): ";
 	cin>>principle;
 	cout<<"Enter the rate p.a : ";
 	cin>>rate;
 	cout<<"Enter the time period (in year): ";
 	cin>>time;
    /* Calculate compound interest */
    double CI = principle * (pow((1 + rate / 100), time));
 
    cout << "Compound interest is " << CI;
 
    return 0;
}
