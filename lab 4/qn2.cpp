#include <iostream>
using namespace std;
class Distance{
private:
	int dist;
public:
	Distance():dist(0){}
	void get()
	{
		cout<<"Enter the distance(in km): "<<endl;
		cin>>dist;
	}

	Distance great(Distance obj1, Distance obj2, Distance  obj3)
	{
		if (obj1.dist > obj2.dist && obj1.dist > obj2.dist)
		{
			return obj1;
		}else if(obj2.dist > obj3.dist)
		{
			return obj2;
		}else{
			return obj3;
		}
	}

	int display()
	{
		return dist;
	}

};

int main()
{
	Distance dist1, dist2, dist3, dist4;

	cout<<"For First Object:"<<endl;
	dist1.get();
	cout<<"For Second Object:"<<endl;
	dist2.get();
	cout<<"For Third Object:"<<endl;
	dist3.get();

	dist4=dist1.great(dist1,dist2,dist3);
	cout<<"The largest distance is: "<<dist4.display()<<endl;
	return 0;
}