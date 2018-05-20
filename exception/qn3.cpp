/*
	Program: Create a template where array of type T elements is defined and there are different functions that return maximum and minumum of the all array elements. 
	instantiate this array for double, float and integer type.
	Author: Allen Nembang
*/
#include<iostream>
using namespace std;
template<class T>
class Array{
	private:
		T *ptr;
		T temp;
		int size;
	public:
		Array(T arr[],int s)
		{
			ptr=new T[s];
			size=s;
			for(int i=0;i<size;i++)
			{
				ptr[i]=arr[i];
			}
		}
		void display()
		{
			for (int i = 0; i < size; i++)
        		cout<<" "<<*(ptr + i);
    		cout<<endl;
    		greater();
    		smallest();
		}
		void greater()
		{
			for(int i=0;i<size;i++)
			{
				for(int j=i+1;j<size;j++)
				{
					if(*(ptr+i)<*(ptr+j))
					{
						temp=*(ptr+i);
						*(ptr+i)=*(ptr+j);
						*(ptr+j)=temp;
					}
				}
			}
			cout<<"Largest element is= "<<*(ptr)<<endl;
		}
		void smallest()
		{
			for(int i=0;i<size;i++)
			{
				for(int j=i+1;j<size;j++)
				{
					if(*(ptr+i)>*(ptr+j))
					{
						temp=*(ptr+i);
						*(ptr+i)=*(ptr+j);
						*(ptr+j)=temp;
					}
				}
			}
			cout<<"Smallest element is= "<<*(ptr)<<endl;
		}
};
int main()
{
	int arr[5];
	float arr1[5];
	double d_arr[5];
	cout<<"Enter 5 integers in array: \n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	Array<int> a(arr,5);
	a.display();
	cout<<"Enter 5 floating point numbers in array:\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr1[i];
	}
	Array<float> b(arr1,5);
	b.display();
	
	cout<<"Enter 5 double numbers in array:\n";
	for(int i=0;i<5;i++)
	{
		cin>>d_arr[i];
	}
	Array<double> c(d_arr,5);
	c.display();
	return 0;
}
