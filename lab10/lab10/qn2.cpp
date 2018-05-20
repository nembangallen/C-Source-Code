/*
	Program:   Write  a C++ code to find out the prime number between 2000 and 2050
	Author: Allen Nembang
*/
#include<iostream>
using namespace std;
int main()
{	
	int low=2000;
	int high=2050;
	int flag;
	cout<<"Prime numbers between 2000 and 2050 are: ";
	while(low<high)
	{
		flag=0;
		for(int i=2;i<=low/2;i++)
		{
			if(low%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<low<<" ";
		low++;
	}
	return 0;
}
