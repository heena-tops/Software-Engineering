#include<iostream>
using namespace std;

int main()
{
	// var declare 
	
	int id;
	string str1;
	
	cout<<"Enter id : ";
	cin>>id; // works as scanf() in C
	
	// >> is insersion operator
	
	fflush(stdin);
	cout<<"Enter Name : ";
	getline(cin,str1); // use to scan multi line string in string class
	
	
	cout<<"Id : "<<id<<endl;
	cout<<"Name : "<<str1<<endl;
	
	return 0;
}
