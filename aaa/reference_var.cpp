#include <iostream>
using namespace std;
int main()
{	
	  int x=5;
	  int *ptr;
	  ptr=&x;
	  int &ref=x;
	  cout<<x<<endl;
	  ref=10;
	  cout<<x<<endl;
	  cout<<ptr<<endl;
	  return 0;
}