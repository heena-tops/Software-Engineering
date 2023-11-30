// Function : w/o return_type w/o parameter

#include<stdio.h>

int val=877; //global variable

// 1. function declaration
void myFunction();  

int main()
{
	printf("\nThis is Main Function\n");
	
	// 3. Function Calling
	myFunction();
	
	printf("\nGlobal Value is : %d",val);
	
	return 0;
}

//2. function Defination
void myFunction()
{
	int num=90; //local variable
	
	printf("\nLocal Value is : %d",num);
	printf("\nGlobal Value is : %d",val);
	
	printf("\nThis is My Function\n");
}

