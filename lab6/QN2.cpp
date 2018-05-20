/*
* Program for basic data type conversion.
*/
#include<iostream>
using namespace std;
int main()
{	
	float kg,gm,gms;
	int k,gram;
	cout<<"\nEnter the distance in kilogram(kg) in float: ";
	cin>>kg;
	k = int(kg); //basic data type conversion
	cout<<"Decimal Part: "<<k<<endl;
	kg=kg-k;
	cout<<"Fractional Part: "<<kg<<endl;
	gm=kg*1000;
	gms=k*1000+gm;
	gram=int(gms); //basic data type conversion
	cout<<"Finally converted into gram: "<<gram<<"\n\n";
	return 0;

}