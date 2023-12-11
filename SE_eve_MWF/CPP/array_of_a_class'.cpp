//Array within a class

#include<iostream>
using namespace std;

class Student{
	public:
		
		int a[3];
		float h[3];
		
		
		void input()
		{
			for(int i=0;i<3;i++)
			{				
				cout<<"Enter height : ";
				cin>>h[i];
				
				cout<<"Enter age : ";
				cin>>a[i];
			}
		}
		
		void display()
		{
			for(int i=0;i<3;i++)
			{
				cout<<"\n=======student :"<<i+1<<" data=======\n";
				cout<<"height : "<<h[i]<<endl;
				cout<<"Age : "<<a[i]<<endl;
			}
		}
};

int main()
{
	Student s1;

	s1.input();
	s1.display();
	
	
	return 0;
}
