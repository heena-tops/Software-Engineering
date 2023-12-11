//Array of a Class

#include<iostream>
using namespace std;

class Student{
	public:
		
		int a;
		float h;
		
		
		void input()
		{			
			cout<<"Enter height : ";
			cin>>h;
			
			cout<<"Enter age : ";
			cin>>a;
		}
		
		void display()
		{
			
			cout<<"height : "<<h<<endl;
			cout<<"Age : "<<a<<endl;
		}
};


int main()
{
	Student s1[3];
	
	for(int i=0;i<3;i++)
	{
		s1[i].input();
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<"\n=======student :"<<i+1<<" data=======\n";
		s1[i].display();
	}
	
	return 0;
}
