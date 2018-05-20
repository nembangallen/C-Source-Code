#include<iostream>
#include<string>
using namespace std;
class Media{
	private:
		string title,publication;
	public:
		void readData()
		{
			cout<<"Enter title and publication: \n";
			cin>>title>>publication;
		}
		void showData()
		{
			cout<<"Title: "<<title<<endl;
			cout<<"Publication: "<<publication<<endl;
		}
	
};
class Book: public Media{
	private:
		int number_of_pages;
	public:
		Book():number_of_pages(0){ readData(); }
		void readData()
		{	
			Media::readData();
			cout<<"Enter number of pages of book: ";
			cin>>number_of_pages;
		}
		void showData()
		{	
			Media::showData();
			cout<<"Number of Pages: "<<number_of_pages<<endl;
		}
};
class DVD:public Media{
	private:
		int duration;
	public:
		DVD():duration(0){ readData(); }
		void readData()
		{
			Media::readData();
			cout<<"Enter the duration of DVD: ";
			cin>>duration;
		}
		void showData()
		{
			Media::showData();
			cout<<"Duration: "<<duration<<endl;
		}	
};
int main()
{	
	Book book_obj;
	Media *ptr;
	ptr=&book_obj;
	book_obj.showData();
	
	DVD dvd_obj;
	ptr=&dvd_obj;
	dvd_obj.showData();
	return 0;
}





