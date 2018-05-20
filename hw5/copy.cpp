#include<iostream>
using namespace std;
class student{
private:
	char name[25];
	int st_id;
public:
	void stGetData()
	{
		cout<<"Enter student id: ";
		cin>>st_id;
		cout<<"Enter Name: ";
		cin>>name;
	}
	void stShow()
	{
		cout<<"Id: "<<st_id<<endl;
		cout<<"Name: "<<name<<endl;
	}
};
class int_exam: virtual public student{
protected:
	int mark1,mark2,mark3;
public:
	void getdata()
	{
		cout<<"Enter Marks1, Marks2 and Marks3: "<<endl;
		cin>>mark1>>mark2>>mark3;
	}
	void show()
	{
		cout<<"Marks1 ="<<mark1<<"\nMarks2 ="<<mark2<<"\nMarks3 ="<<mark3<<endl;
	}
	int total_int()
	{
		return (mark1+mark2+mark3);
	}
};
class ext_exam: virtual public student{
protected:
	int mark1,mark2,mark3;
public:
	void getdata(){
		cout<<"enter mark1, mark2 and mark 3";
		cin>>mark1>>mark2>>mark3;
	}
	void show(){
		cout<<"mark1= "<<mark1<<" mark2= "<<mark2<<" mark 3= "<<mark3<<endl;
	}
	int total_ext(){
		return(mark1+mark2+mark3);
	}
};
class result: public int_exam,public ext_exam{
public:
	void getdata()
	{
		int_exam::getdata();
		ext_exam::getdata();
	}
	void show()
	{
		int_exam::show();
		ext_exam::show();
	}
	int total()
	{
		return (total_int()+total_ext());
	}
};

int main()
{
	result r;
	cout<<"Enter the data for result processing: ";
	r.stGetData();
	r.getdata();
	cout<<"\nData is: "<<endl;
	r.stShow();
	r.show();
	cout<<r.total()<<endl;
	return 0;

}