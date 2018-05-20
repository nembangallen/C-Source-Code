#include<iostream>
using namespace std;

class Distance{
	
	int feet; float inches;
	public:
		Distance():feet(0),inches(0.0)
		{
		cout<<"1";
		}
		Distance(int ft, float in):feet(ft),inches(in)
		{
			cout<<"2";
		}
		void gd(){
			cout<<"enter feet and inch "<<endl;
			cin>>feet>>inches;
		}
		void show(){
			cout << feet <<" ft " <<inches<<" in "<<endl;
		}
		void addis(Distance,Distance);
		
};
void Distance::addis(Distance d1,Distance d2){
	inches=d1.inches+d2.inches;
	feet=0;
	if (inches>=12.0 ){
		inches-=12.0 ;
		feet++;
	}
	feet +=d1.feet + d2.feet;
}
int main(){
	Distance dist1,dist2;
	
	Distance dist3 (11,6.25);
// dist3.show();
	dist1.gd();
	
	dist2.addis(dist1,dist3);	
	
	cout<<endl<<"user set distance 1="; dist1.show();
	cout<<endl<<"programmer set distance 3= ";dist3.show();
	cout<<endl<<" addition of two distances = ";dist2.show();
return 0;
}

