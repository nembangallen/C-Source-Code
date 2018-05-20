#include<iostream>
using namespace std;
int main()
{
	int counter;
	for(counter=1;counter<=10;counter++)
	{
		cout<<counter<<endl;
		if(counter==5)
			break;
	}
	return 0;
}
