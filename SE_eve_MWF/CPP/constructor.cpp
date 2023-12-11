#include<iostream>
using namespace std;

/*

	Constructor : "The method which call automatically when object of such class is created"
	
	property:
		- they are always in public mode
		- calss name and constructor name must be same
		- constructor doesn't have any return type
		
	Types Of Constructor : 
	
	1. Default Constructor
	2. Parameterized Constructor
	3. Copy Constructor
	
	Destructor : "The method which call automatically when object of such class is destroyed"
	
	property:
		- they are always in public mode
		- calss name and destructor name must be same
		- destructor doesn't have any return type
		- they are represented with tild(~) sign before the name

*/


class User{
	public:
		int a;
		string n;
		
		
		//default contrsuctor
		User()
		{
			cout<<"\n\nThis is Default Constructor \n\n";
		}
			
		~User()
		{
			cout<<"Destructor Call"<<endl;
		}
		
		//parameterized constructor
		User(int age, string name)
		{
			cout<<"Parameterized Constructor call"<<endl;
			a=age;
			n=name;	
		}
		
		void display()
		{
			cout<<"Your name : "<<n<<endl;
			cout<<"age is : "<<a<<endl;
		}
};


int main()
{
	
	User u1; // call default constructor
	
	User u2(12,"XYZ"); //call parameterized constructor
	
	u2.display();
	
	return 0;
}
