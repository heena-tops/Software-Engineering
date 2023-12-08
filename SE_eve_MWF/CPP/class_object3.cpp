#include<iostream>
using namespace std;

class Person
{
	public:
	int id=90;
	string name="ABC"; // in C++ string works as a class
	
	//method to set data
	void input(){
		cout<<"\n\nEnter Id : ";
		cin>>id;
		
		fflush(stdin);
		cout<<"Enter Name : ";
		getline(cin,name); // take mutiple line input
	}
	
	//method to get data
	void display()
	{
		cout<<"Id = "<<id<<endl;
		cout<<"Name = "<<name<<endl;
	}
		
};

class Bird
{
	public:
	
		string bname;
		
		void setter()
		{
			cout<<"\n\nEnter name of the Bird : ";
			cin>>bname;
		}
		
		void getter()
		{
			cout<<"Bird Name : "<<bname<<endl;
		}
		
			
};

int main()
{
	//object creation 
	
	Person p1;
	Bird b1;
	
	p1.input();
	p1.display();
	
	b1.setter();
	b1.getter();
	
	return 0;
}










