#include<iostream>
#include<stdlib.h>
#define MAX 50
using namespace std;
template<class T>
class Queue{
	private:
		T queue_array[MAX];
		T item;
		int rear=-1;
		int front=-1;
	public:
		void enqueue();
		T dequeue();
		void display()
		{
			int i;
			if(front==-1)
				cout<<"Queue is empty\n";
			else
			{
				printf("Queue is: \n");
				for(i=front;i<=rear;i++)
					queue_array[i];
				cout<<endl;
			}
		}
};
template<class T>
void Queue<T>::enqueue()
{
	if(rear==MAX-1)
	   	cout<<"Queue Overflow\n";
	else	
		if(front==-1)
			front=0;
		rear=rear+1;
		cout<<"Enter the item to be inserted in queue: ";
		cin>>item;
		queue_array[rear]=item;
}	
template<class T>
T Queue<T>::dequeue()
{	
	T delete_item;
	if(front==-1 || front>rear)
	{
		cout<<"Queue Underflow\n";
		return;	
	}else{
		delete_item=queue_array[front];
		front=front+1;
	}
	return delete_item;
}

//void Queue::display()
//{
//	int i;
//	if(front==-1)
//		cout<<"Queue is empty\n";
//	else
//	{
//		printf("Queue is: \n");
//		for(i=front;i<=rear;i++)
//			queue_array[i];
//		cout<<endl;
//	}
//}

int main()
{
	int choice;
	while(1)
	{
		cout<<"1.Insert element in queue\n";
		cout<<"2.Delete element in queue\n";
		cout<<"Display all elements of queue\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			Queue<int> intValue;
			intValue.enqueue();
			Queue<float>floatValue;
			floatValue.enqueue();
			Queue<double>doubleValue;
			doubleValue.enqueue();
			break;
			
			case 2:
			Queue<int>intValue;
			cout<<"Deleted item is: "<<intValue.dequeue();
			break;
			
			case 3:
			display();
			break;
				
			case 4:
			exit(0);
				
			default:
			cout<<"Invalid choice"<<endl;
		}
	}
	
	return 0;
}










