#include<iostream>

using namespace std;
class studentinfo{
	
private:
	char name[20];
	float marks,OS,NM,OPP,average;
	int student_id;
public:
	void setinfo()
	{
		cout<<"Enter the name of  student"<<endl;
		cin>>name;
		cout<<"Enter the student id"<<endl;
		cin>>student_id;
		cout<<"Enter the marks obtained in different subject by student"<<endl;
		cout<<"Marks in OS:";
		cin>>OS;
		cout<<"Marks in NM:";
		cin>>NM;
		cout<<"Marks in OPP:";
		cin>>OPP;
		average=(OS+NM+OPP)/3;
	}
	void detail(){
		cout<<"The Name of student is :"<<name<<endl;
		cout<<"Student id is:"<<student_id<<endl;
		cout<<"The average mark obtained by student ";
		cout<<average;
		
		
	}
};
int main(){
	studentinfo s1,s2,s3;
	
	s1.setinfo();
	
	
	s2.setinfo();
	
	
	s3.setinfo();
	
	cout<<"\nThe detail of student 1 is:\n",s1.detail();
	cout<<"\nThe detail of student 2 is:\n",s2.detail();
	cout<<"\nThe detail of student 3 is:\n",s3.detail();
	return 0;
	
}