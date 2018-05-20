#include <iostream>
#include <string>
using namespace std;
class clock{
protected:
	string model;
	float price;
	string manufacturer;
public:
	void setClockData()
	{
		cout<<"Enter clock data:\n";
		cout<<"Enter Model, Price and Manufacturer: \n";
		cin>>model>>price>>manufacturer;
	}
	void getClockData()
	{
		cout<<"Clock Data:\n";
		cout<<"Model: "<<model;cout<<"Price: "<<price;cout<<"Manufacturer: "<<manufacturer<<endl;
	}

};
class wall_clock:public clock{
private:
	int hr,min,sec;
public:
	wall_clock():hr(0),min(0),sec(0){}
	void getTime()
	{
		cout<<"Enter Time in hour, minute and second: ";
		cin>>hr>>min>>sec;
	}
	void showTime()
	{	
		getClockData();
		cout<<"Time is: "<<endl;
		cout<<hr<<" : "<<min<<" : "<<sec<<" : "<<endl;
	}
};
int main()
{
	wall_clock obj;
	obj.setClockData();
	obj.getTime();
	obj.showTime();

	return 0;
}