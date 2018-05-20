#include <iostream>
using namespace std;
class Marks{
private:
	int mark;
public:
	Marks(int m):mark(m){}
	void show()
	{
		cout<<"Marks: "<<mark<<endl;
	}
	Marks *operator ->()
	{
		return this;
	}
};
int main()
{	
	Marks anilMark(65);
	anilMark.show();
	anilMark->show();
	return 0;
}