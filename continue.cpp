#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number upto which you want to display the whole numbers: ";
	cin>>num;
	for (int i = 0; i <= num; i++)
	{
		if (i  == 3)
		{
			continue;
		}else{
			cout<<i<<endl;		
		}
	}
}