#include<iostream>
using namespace std;

class Parent{
	public:
		string name="Hello";
};

//Passing an object to a funciton
void displayP(Parent o1)
{
	cout<<o1.name;
}

int main()
{	
	Parent p1;
	
	displayP(p1);
		
	return 0;
}
