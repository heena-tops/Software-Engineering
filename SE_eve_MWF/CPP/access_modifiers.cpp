#include<iostream>
using namespace std;

class A{
	
	private:
		int num1=90;
	
	protected:
		int num2=89;
		
	public:
		int num3=74;
		
	void displayA()
	{
		cout<<"num1 : "<<num1<<endl;
		cout<<"num2 : "<<num2<<endl;
		cout<<"num3 : "<<num3<<endl;
	}
};

class B : public A{
	
	public:
	void displayB()
	{
		cout<<"\n========in B=======\n";
		cout<<"num2 : "<<num2<<endl;
		cout<<"num3 : "<<num3<<endl;
	}
};

int main()
{
	
	B a1;
	C c1;
	
	a1.displayA();
	a1.displayB();
	c1.displayC();
	
	return 0;
}
