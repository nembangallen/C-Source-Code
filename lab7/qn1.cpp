#include<iostream>
#include<string>
using namespace std;

class employee {
private:
	string name;
	int employee_num;
public:
	void getdata(){
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter Employee Number:";
		cin>>employee_num;
	}
	void show(){
		cout<<" name :"<<name<<endl;
		cout << " employee number :"<<employee_num<<endl;
	}
};
class emp2: public  employee {
private:
	float compensation;
	enum pay{ hourly=1,weekly=2,monthly=3 };
public:
	int r;
	char salery_schedule;
	void getdata(){
		cout<<"Enter the compensation fo the employee :";
		cin>>compensation;
	}
	void show(){
		cout<<" company name :"<<compensation<<endl;
		cout<<"Enter working schedule of employee";
		cout<<"\n1.hourly\n2.weekly\n3.monthly\n"<<endl;
		cin>>r;
		switch(r)
		{
			case hourly: std::cout << "working schedule:hourly\n"; break;
			case weekly: std::cout << "working schedule:weekly\n"; break;
			case monthly : std::cout << "working schedule:monthly\n";  break;
			default : cout << "Enter a valid choice";  break;
		}
	}
};

class manager: public emp2{
private:
	int hrs;
public:
	void getdata(){
		employee::getdata();
		emp2::getdata();
		cout<<"Enter the working hours";
		cin>>hrs;
	}
	void show(){
		employee::show();
		emp2::show();
		cout<<"working hours"<<hrs;
	}
};
class lecture: public emp2{
private:
	int hrs;
public:
	void getdata(){
		employee::getdata();
		emp2::getdata();
		cout<<" Enter the working hours";
		cin>>hrs;
	}
	void show(){
		employee::show();
		emp2::show();
		cout<<" \n working hours "<< hrs;
	}
};
class maintenance: public emp2{
private:
	int hrs;
public:
	void getdata(){
		employee::getdata();
		emp2::getdata();
		cout<<" Enter the working hours";
		cin>>hrs;
	}
	void show(){
		employee::show();
		emp2::show();
		cout<<" \n working hours "<< hrs;
	}
};

int main(){
	manager ma;
	cout<< "Enter the data of manager officer "<<endl;
	ma.getdata();
	cout << "\n data is "<<endl;
	ma.show();
	return 0;
}
