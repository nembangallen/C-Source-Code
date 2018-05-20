#include<iostream> 
using namespace std;
class Sugar{
public:
	float x;
public:
	float cost(float x)
	{	
		if(x>=2){
			cout<<"Your cost is: "<<(x*60)-((x*60)*0.05)<<endl;
		}else{
			cout<<"You don't get any discount"<<endl;
			cout<<"Your cost is: "<<x*60<<endl;
		}
	}
public:
	inline float newCost(float n_kg)
	{	
		float price;
		cout<<"Please enter the new price: ";
		cin>>price;
		if(n_kg>=2){
			cout<<"Your new cost is: "<<(n_kg*price)-((n_kg*price)*0.05)<<endl;
		}else{
			cout<<"You don't get any discount"<<endl;
			cout<<"Your new cost is: "<<n_kg*price<<endl;
		}
	}

};

int main()
{
	Sugar Sug_1,Sug_2,Sug_3,Sug_4;
	cout<<"\nInitial Rate is: Rs 60/kg.\n"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"The weight of 1st sugar packet is 2kg."<<endl;
	Sug_1.cost(2);
	Sug_1.newCost(2);
	cout<<"------------------------"<<endl;
	cout<<"The weight of 2nd sugar packet is 1kg."<<endl;
	Sug_2.cost(1);
	Sug_2.newCost(1);
	cout<<"------------------------"<<endl;
	cout<<"The weight of 3rd sugar packet is 1kg."<<endl;
	Sug_3.cost(1);
	Sug_3.newCost(1);
	cout<<"------------------------"<<endl;
	cout<<"The weight of 4th sugar packet is 5kg."<<endl;
	Sug_4.cost(5);
	Sug_4.newCost(5);

	return 0;
}