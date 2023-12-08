#include<iostream>
using namespace std;

class Person
{
	//class members : var+funcitons
	
	/*
		Access Modifiers : 
		public : can be access inside and outside of a class
		private :  only accessible to class
		protected : accessible to class and child class only
	*/
	public:
	int id=90;
	string name="ABC";
		
};

int main()
{
	//object creation 
	
	Person o1;
	
	cout<<o1.id<<endl; // . <-- this dot is membership operator
	cout<<o1.name;
	
	return 0;
}
