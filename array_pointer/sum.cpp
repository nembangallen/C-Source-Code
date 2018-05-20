#include<iostream>
using namespace std;
int main()
{
	int arr[3],sum=0;
	int i;
	cout<<"Enter 3 numbers: "<<endl;
	for (i = 0; i < 3; i++)
	{
		cin>>*(arr+i);
		sum+=*(arr+i);
	}

	cout<<"Sum of 3 numbers is:"<<sum<<endl;

	return 0;
}