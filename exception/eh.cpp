#include<iostream>
using namespace std;
int main()
{
	cout<<"Welcome";
	try{
		throw 10;
		cout<<"\nIn Try";
	}
	catch(int e){
		cout<<"Exception number is: "<<e;
	}
	cout<<"\nLast Line";
}