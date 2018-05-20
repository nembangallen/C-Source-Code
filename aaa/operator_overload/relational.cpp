#include <iostream>
using namespace std;
class Distance{
private:
	int feet;
	int inch;
public:
	Distance():feet(0),inch(0){}
	void getDistance()
	{
		cout<<"Enter distance in feet and inch: "<<endl;
		cin>>feet>>inch;
	}
	bool operator <(const Distance& d)
	{
		if (feet < d.feet)
			return true;
		if (feet==d.feet && inch<d.inch)
			return true;
		return false;
	}
};
int main()
{
	Distance d1,d2;
	d1.getDistance();
	d2.getDistance();
	if (d1<d2)
		cout<<"d1 is less than d2"<<endl;
	else
		cout<<"d2 is less than d1"<<endl;
	return 0;
}