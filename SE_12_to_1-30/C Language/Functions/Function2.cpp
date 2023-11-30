// Function : w/o return_type with parameter

#include<stdio.h>

// 1. function declaration & defination
void myFunction(char ch)  // here ch is formal parameter
{
	printf("\nThis is My Function value from main is : %c\n",ch);
}

int main()
{
	char d='x';
	
	printf("\nThis is Main Function\n");
	
	// 3. Function Calling
	myFunction(d); // here d is actual parameter 
	
	return 0;
}
