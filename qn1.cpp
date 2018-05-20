#include<iostream>
using namespace std;
class employee_info{
public:
	char name[20];
	int years;
	char emp_form;
	int sales;
	int salary;

public:
	void empInfo(){
		cout<<"Enter Employee name: ";
		cin>>name;
		cout<<"Enter service years: ";
		cin>>years;
		cout<<"Enter no.of sales: ";
		cin>>sales;
		cout<<"Enter salary: ";
		cin>>salary;
		setform();
	}
	void setform(){
		switch(sales){
			case 1 ... 999:
			emp_form ='d';
			break;

			case 1000 ... 3000:
			emp_form='n';
			break;	

			default:
			emp_form='g';			
		}
		increaseSalary();
	}
	void increaseSalary(){
		if(emp_form =='g' && years>=5){
			salary = salary + (0.2*salary);
		}else if(emp_form =='g' && years<5){
			salary = salary + (0.1*salary);
		}else if(emp_form == 'n' && years>=5){
			salary = salary + (0.1*salary);
		}else if(emp_form == 'n' && years<5){
			salary = salary + (0.05*salary);
		}else{
			salary = salary;
		}
	}
	void display(){
		cout<<"\t"<<name<<"  | "<<years<<"     | "<<sales<<"     | "<<emp_form<<"     | "<<salary<<endl;
	}
};
int main(){
	employee_info emp1,emp2,emp3;

	cout<<"Enter 1st employee details:"<<endl;
	emp1.empInfo();
	cout<<"Enter 2nd employee details:"<<endl;
	emp2.empInfo();
	cout<<"Enter 3rd employee details:"<<endl;
	emp3.empInfo();
	cout<<"----------------------"<<endl;
	cout<<"\nEmployee Details:"<<endl;
	cout<<"\tName  | Years | Sales  | Form | Salary"<<endl;
	emp1.display();
	emp2.display();
	emp3.display();
	return 0;
}
