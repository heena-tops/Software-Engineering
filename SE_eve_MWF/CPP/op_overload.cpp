//Operator Overloading 

#include<iostream>
using namespace std;

class A{
	
	public:
	
	int num;
		
	//constructor
	A(int x){
		num=x;
	}
	
	void operator +(A obj)
	{
		cout<<num+obj.num;
	}
	
};

int main()
{
	A a1(12);
	A a2(3);
	
	
	a1+a2;
	
	return 0;
}
