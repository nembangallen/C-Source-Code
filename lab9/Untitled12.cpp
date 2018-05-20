#include<iostream>
using namespace std;
int main()
{
	int counter;
	for(counter=1;counter<=10;counter++)
	{	
		if(counter==5)
			continue;
		cout<<counter<<endl;
	}
	return 0;
}
