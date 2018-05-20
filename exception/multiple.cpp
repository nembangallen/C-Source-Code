#include<iostream>
using namespace std;
int main()
{
	int num;
	float fnum;
	try{
		cout<<"Enter integer number: ";
		cin>>num;
		if(num<=0)
			throw num;
		else
		   cout<<"Entered num: "<<num<<endl;
		   
		cout<<"Enter floating point number: ";
		cin>>fnum;   
		if(fnum<=0)
			throw fnum;
		else
			cout<<"Entered floating pont number is: "<<fnum<<endl;
	}catch(int num)
	{
		cout<<"An exception is occured."<<endl;
		cout<<"Enter number greater than 0."<<endl;
	}catch(float fnum)
	{
		cout<<"An exception is occured."<<endl;
		cout<<"Enter floating number greater than 0."<<endl;
	}
	return 0;
	
}
