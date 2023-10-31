#include<iostream>
using namespace std;

class A{
	public:
		virtual void abc()=0;
		
	void display(){
		cout<<"This is normal method"<<endl;
	}
};

class B : public A{
	public:
		void abc()
		{
			cout<<"Abc"<<endl;
		}
		void displayB()
		{
			cout<<"heyaa"<<endl;
		}
};

int main()
{
	B obj;
	
	obj.abc();
	obj.display();
	obj.displayB();
	
	
	return 0;
}
