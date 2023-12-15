/*

	Polymorphism :
	"Having many forms"
	
	>>Types of Polymorphism :
	
	1. Overloading
	2. Overriding

*/
#include<iostream>
using namespace std;

class A{
	public:
		
		int add(int x, int y){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
			return x+y;
		}
		
		int add(int p,int q,int r){
			cout<<"p = "<<p<<endl;
			cout<<"q = "<<q<<endl;
			cout<<"r = "<<r<<endl;
			return p+q+r;
		}
		
		int add(int a,int b,int c, int d){
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
			cout<<"d = "<<d<<endl;
			return a+b+c+d;
		}
};

int main()
{
	A a1;
	
	cout<<a1.add(12,3)<<endl;
	cout<<a1.add(12,3,6)<<endl;
	cout<<a1.add(12,3,5,7)<<endl;
	
	return 0;
}
