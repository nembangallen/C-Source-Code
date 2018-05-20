#include<iostream>
using namespace std;
class pricecalculate{
	public:
		int weight;
		int price = 60;
		int totalprice;
   		float finalamount;
	   public:
	   void costcalculation(){
	
			totalprice = weight * price;
			modifyprice();
		}
		void modifyprice(){
	
			switch(weight){
				case 2 ... 5:
					finalamount = totalprice - (0.05 * totalprice);
				break;
				default:
					finalamount = totalprice;
	    	}
		}
	inline void displayresult(){
		cout<<"RS."<<finalamount<<endl;;
	}
	
};

int main(){
	
	pricecalculate sug_1,sug_2,sug_3,sug_4;
	//ricecalculte
	cout<<"\t\t\tProgrammed By Razu"<<endl;
	sug_1.weight = 2;
	sug_1.costcalculation();
	cout<<"The Total Cost of Sug_1 is :";
	sug_1.displayresult();
	sug_2.weight = 1;
	sug_2.costcalculation();
	cout<<"The Total Cost of Sug_2 is :";
	sug_2.displayresult();
	sug_3.weight = 1;
	sug_3.costcalculation();
	cout<<"The Total Cost of Sug_3 is :";
	sug_3.displayresult();
	sug_4.weight = 5;
	sug_4.costcalculation();
	cout<<"The Total Cost of Sug_4 is :";
	sug_4.displayresult();
	return 0;
	
}
