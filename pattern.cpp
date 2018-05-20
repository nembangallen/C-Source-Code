#include<iostream>
using namespace std;
int main()
{
	int i,space,rows,temp;
	cout<<"Enter number of rows:  ";
	cin>>rows;
	temp=rows;
	for (i = 1; i <= rows; i++)
	{
		for (space = 1; space <=rows-1; space++)
		{
			cout<<" ";
		}
		temp--;
		for (space = 1; space <= 2*rows-1; space++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}