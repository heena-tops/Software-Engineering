#include<iostream>
using namespace std;

class Person
{
	public:
	int id=90;
	string name="ABC"; // in C++ string works as a class
	
	void input(){
		cout<<"Enter Id : ";
		cin>>id;
		
		cout<<"Enter Name : ";
		cin>>name;
	}
	
	void display()
	{
		cout<<"Id = "<<id<<endl;
		cout<<"Name = "<<name;
	}
		
};

int main()
{
	//object creation 
	
	Person o1;
	
	o1.input();
	o1.display();
	
	return 0;
}










