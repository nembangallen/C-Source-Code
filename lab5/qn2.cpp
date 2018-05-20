/*
Author: Allen Nembang
*/
#include <iostream>
using namespace std;
class Time{
private:
	int hrs,min,sec;
public:
	Time():hrs(0),min(0),sec(0){}
	Time(int x,int y,int z)
	{
		hrs=x;
		min=y;
		sec=z;
	}


	void display()
	{
		cout<<hrs<<":"<<min<<":"<<sec<<endl;
	}
	void add(Time,Time);
};
void Time::add(Time t1,Time t2)
{
	sec=t1.sec+t2.sec;
	min=sec/60;
	sec=sec%60;
	min=min+t1.min+t2.min;
	hrs=min/60;
	min=min%60;
	hrs=hrs+t1.hrs+t2.hrs;
}
int main()
{
	Time t1(4,5,34),t2(3,8,55),t3;
	t3.add(t1,t2);
	cout<<"First Time: ";
	t1.display();
	cout<<"Second Time: ";
	t2.display();
	cout<<"The sum of two time (4:5:34) and (3,8,55) is: ";
	t3.display();
	return 0;
}