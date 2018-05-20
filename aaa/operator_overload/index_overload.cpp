#include <iostream>
#include <stdlib.h>
using namespace std;
class Test{
private:
	int arr[10];
public:
	Test(){
		for (int i = 0; i < 10; i++)
		{
			arr[i]=i;
		}
	}
	int &operator[](int i)
	{
		if (i>=10)
		{
			cout<<"Index out of bounds"<<endl;
			exit(0);
		}
		return arr[i];
	}
};
int main()
{
	Test T;
	cout<<"Value of T[2]: "<<T[2]<<endl;
	cout<<"Value of T[3]: "<<T[3]<<endl;
	cout<<"Value of T[11]: "<<T[11]<<endl;
	return 0;
}