#include <iostream>
using namespace std;
const float MeterToFloat=3.280833;
class Distance {
	int feets;
	float inches;
public:
	Distance() { //Distance Constructor
		feets=0;
		inches=0.0;
	}
	Distance(float numofmeters)   { //Single Parameter constructor
		float feetsinfloat= MeterToFloat * numofmeters;
		feets=int(feetsinfloat);
		inches=12*(feetsinfloat-feets);
	}
	void displaydist() { // Method to display converted values
		cout<<"Converted Value is: "<<feets<<"\' feets and "<<inches<<'\"'<<" inches.";
	}
};
int main() {
	cout <<"Float to distance conversion.\n********************************\n";
	float meters;
	cout<<"Enter values in meter:";
	cin >>meters;
	Distance distance = meters;
	distance.displaydist();
}