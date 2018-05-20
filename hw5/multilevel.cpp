#include<iostream>
using namespace std;
class Student{
protected:
    int marks;
    
public:
    void accept(){
        cout<<" Enter marks";
        cin>>marks;
        
    }
};

class Test :public Student{
protected:
    
    int p=0;
    
public:
    void check(){
        if(marks>60){
            p=1;
        }
    }
};

class Result :public Test{
public:
    void print(){
        if(p==1)
            cout<<"\n You have passed";
        else
            cout<<"\n You have not passed";
    }
};
int main(){
    Result r;
    
    r.accept();
    r.check();
    r.print();
    
    return 0;
}