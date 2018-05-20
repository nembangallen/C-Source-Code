#include<iostream>
using namespace std;
class Create{
private:
	static int count;

public:
	Create()
	{
		count++;
	} 
	static int getCount()
	{
		return count;
	}
};
int Create::count;
// int Create::count=0;
int main()
{
	cout<<"Initial Stage, before creating object: "<<Create::getCount()<<endl;
	Create obj1;
	Create obj2;
	cout<<"Final Stage, after successful creation of objects: "<<Create::getCount()<<endl;
	return 0;
}
