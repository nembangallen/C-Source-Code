#include<iostream>
#include<iomanip>
using namespace std;

class dist{
	public:
		int feet,inch;
		void set(){
			cout <<"enter the feet and inch "<<endl;
			cin>>feet>>inch;
		}
};
void calc(dist& d1,dist& d2, dist& maxi){
	if (d1.feet>d2.feet)
		maxi=d1;
	else if (d1.feet<d2.feet)
		maxi= d2;
	else if ((d1.feet== d2.feet)&&(d1.inch>d2.inch)) 
		maxi= d1;
	else 
		maxi= d2; 
}

int main(){
	dist dd1,dd2,max;
	dd1.set();
	dd2.set();
	calc(dd1,dd2,max);
	cout<<"the maximum distance among the two is  "<<max.feet<<endl<<max.inch;
	return 0;
	}
