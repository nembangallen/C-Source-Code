#include <iostream>
using namespace std;
class Number{
private:
	int num;
	int dec;
	int left;
public:
	Number():num(0),dec(0){}
	void getValue()
	{
		cout<<"Enter whole number part: ";
		cin>>num;
		cout<<"Enter decimal number part: ";
		cin>>dec;
	}
	int showNum()
	{
		return num;
	}

	int showDec()
	{
		return dec;
	}

	int checkDec()
	{	
		// left=0;
		int x;
		while(dec != 0)
		{
			left = dec;
			dec/=10;
			x++;
		}
		return left;
	}

};

int sort(Number arr[])
{	
	Number temp;
	for (int i = 0; i < 7; i++)
	{
		for (int j = i+1; j < 7; j++)
		{
			if (arr[i].checkDec() > arr[j].checkDec())
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}


int main()
{
	Number *ptr = new Number[7];

	for (int i = 0; i < 7; i++)
	{
		cout<<"For "<<i+1<<" object\n";
		ptr[i].getValue();
	}
	cout<<"Before Calling Function: ";
	for (int i = 0; i < 7; i++)
	{
		cout<<"\n"<<ptr[i].showNum()<<"."<<ptr[i].showDec();
	}
	sort(ptr);
	cout<<"\nAfter calling Function:\n";
	for (int i = 0; i < 7; i++)
	{
		cout<<ptr[i].showNum()<<"."<<ptr[i].checkDec()<<endl;
	}

	return 0;
}