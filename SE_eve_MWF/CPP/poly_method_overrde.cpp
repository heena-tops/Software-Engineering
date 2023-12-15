#include<iostream>
using namespace std;

class A{
	public:
	
	void display(){
		cout<<"In Parent class"<<endl;
	}	
};

class B : public A{
	public:
	
	void display(){
		A::display();
		cout<<"In Child class"<<endl;
	}	
};

int main()
{
	B b1;
	
	b1.display();
//	b1.A::display();
	
	return 0;
}
