#include<iostream>
using namespace std;

int main()
{
	int var;
	
	cout<<"Enter number : "; // works as printf() in C
	cin>>var; // works as scanf() in C
	
	if(var>0)
	{
		cout<<"+ve";
	}
	else if(var<0)
	{
		cout<<"-ve";
	}
	else
	{
		cout<<"zero";
	}
	
	return 0;
}
