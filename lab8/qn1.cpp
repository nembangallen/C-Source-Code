/*
	Program:  Create a program that shows the use of simple exception example which throws the Range type object when the index of the stack goes beyond 3 and below 0.
	Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class Range
{
  private:
    int input;
    int lower;
    int upper;
    int st[4];

  public: 
    // Exception class
    class OutOfRange { }; 

    Range(int low, int high)
    { 
      lower=low; 
      upper=high; 
      for (int i = 0; i<4; i++)
      {
        st[i]=i+4;
      }
    }
    int getInput()
    {
      cin>>input;
      if (input < lower || input > upper)
        throw OutOfRange(); //default constructs an object of OutOfRange then throws it.
      return st[input];
    }
};


int main()
{
  Range range(0, 3);
  int userValue;

  cout << "Enter a value in the range 0 - 3: ";
  try
  {
    userValue = range.getInput();
    cout << "You entered element value in stack: "<<userValue<<endl;
  }
  catch (Range::OutOfRange) //catching an object of type Range::OutOfRange
  {
    cout << "That value is out of range.\n";
  }

  return 0;
}
