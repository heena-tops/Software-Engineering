#include<iostream>
using namespace std;

int main()
{
	//condition in c++
	
	int num;
	
	cout<<"Enter num : ";
	cin>>num;
	
	// ternary operator :  ?:
	
	// syntax : condition?exp1:exp2;
	
	(num%2==0)?cout<<"Even":cout<<"Odd";
	
	return 0;
}
