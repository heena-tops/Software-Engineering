#include<iostream>
using namespace std;

/*
	Inheritance : "Ability to adapt behaviour of parent class 
				to the child class"
				
				"here two or more class are in parent-child relation"
				
				
		note : "Objects are only created of the least child class"
				
		>>Types 
		1. Single level 
		2. Multi-level
		3. Multiple 
		4. Heirarchical
		5. Hybrid

*/

class Parent{
	public:
		
		void displayP(){
			cout<<"Hello from Parent"<<endl;
		}
};

class Child: public Parent{
	public:
		
		void displayC(){
			cout<<"Hello from Child"<<endl;
		}
};

int main()
{
	Child c1;
	
	c1.displayC();
	c1.displayP();
		
	return 0;
}
