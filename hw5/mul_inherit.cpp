#include <iostream>
using namespace std;

class student {
private:
	char name[25];
	int studid;
public:
	void stgetdata(){
		cout<<"enter name";
		cin>>name;
		cout <<"enter id";
		cin>> studid;
	}
	void stshow(){
		cout<<" name :"<<name;
		cout << " student id :"<<studid;
	}
};		
class int_exam: virtual public student{
protected:
	int mark1, mark2, mark3;
public:
	void getdata(){
		cout<<"enter mark1, mark2 and mark 3";
		cin>>mark1>>mark2>>mark3;
	}
	void show(){
		cout<<" mark1= "<<mark1<<" mark2= "<<mark2<<" mark 3= "<<mark3<<endl;
	}
	int tot_int(){
		return(mark1+mark2+mark3);
	}
};		

class ext_exam: public virtual student{
protected:
	int mark1, mark2, mark3;
public:
	void getdata(){
		cout<<"enter mark1, mark2 and mark 3";
		cin>>mark1>>mark2>>mark3;
	}
	void show(){
		cout<<"mark1= "<<mark1<<" mark2= "<<mark2<<" mark 3= "<<mark3<<endl;
	}
	int tot_ext(){
		return(mark1+mark2+mark3);}
		
	};		

	class result: public int_exam,public ext_exam{
	public:
		void getdata(){
			int_exam::getdata();
			ext_exam::getdata();
		}
		void show(){
			int_exam::show();
			ext_exam::show();
		}
		int tot(){
			return(tot_int()+tot_ext());
		}
	};

	int main(){
		result r;
		cout<< "enter the data of result processing "<<endl;
		r.stgetdata();
		r.getdata();
		cout << "\n data is "<<endl;
		r.stshow();
		r.show();
		cout<<r.tot();
		return 0;
	}